#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class TarjanSCC {
private:
    int V;
    int timer;
    vector<vector<int>> graph;
    vector<int> disc, low;
    vector<bool> inStack;
    stack<int> st;

    void tarjanDFS(int u) {
        disc[u] = low[u] = timer++;
        st.push(u);
        inStack[u] = true;

        for (int v : graph[u]) {

            if (disc[v] == -1) {
                tarjanDFS(v);
                low[u] = min(low[u], low[v]);
            }
            else if (inStack[v]) {
                low[u] = min(low[u], disc[v]);
            }
        }

        if (disc[u] == low[u]) {
            vector<int> scc;

            while (true) {
                int node = st.top();
                st.pop();
                inStack[node] = false;

                scc.push_back(node);

                if (node == u)
                    break;
            }

            sort(scc.begin(), scc.end());

            cout << "SCC: ";
            for (int node : scc)
                cout << node << " ";
            cout << endl;
        }
    }

public:
    TarjanSCC(int vertices) {
        V = vertices;
        timer = 0;

        graph.resize(V);
        disc.assign(V, -1);
        low.assign(V, -1);
        inStack.assign(V, false);
    }

    void addEdge(int u, int v) {
        graph[u].push_back(v);
    }

    void findSCCs() {
        for (int i = 0; i < V; i++) {
            if (disc[i] == -1)
                tarjanDFS(i);
        }
    }
};

int main() {

    int V, E;

    cout << "Enter number of vertices: ";
    cin >> V;

    cout << "Enter number of edges: ";
    cin >> E;

    TarjanSCC g(V);

    cout << "\nEnter the directed edges (u v):\n";
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }

    cout << "\nStrongly Connected Components (Tarjan's Algorithm)\n";
    cout << "-------------------------------------------------\n";

    g.findSCCs();

    return 0;
}