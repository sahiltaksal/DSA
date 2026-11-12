
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, weight;
};

int parent[20];

int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

int main() {
    int n, w;
    cout << "Enter number of departments: ";
    cin >> n;

    string name[20];
    int adj[20][20] = {};

    for (int i = 0; i < n; i++) {
        cout << "Enter department " << i + 1 << " name: ";
        cin >> name[i];
        parent[i] = i;
    }

    cout << "\nEnter adjacency matrix (0 = no connection):\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> adj[i][j];

    vector<Edge> edges;

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (adj[i][j] > 0)
                edges.push_back({i, j, adj[i][j]});

    sort(edges.begin(), edges.end(),
         [](Edge a, Edge b) { return a.weight < b.weight; });

    int total = 0, count = 0;

    cout << "\nMinimum Spanning Tree:\n";

    for (Edge e : edges) {
        int a = find(e.u);
        int b = find(e.v);

        if (a != b) {
            parent[a] = b;
            cout << name[e.u] << " - " << name[e.v]
                 << " : " << e.weight << " m\n";
            total += e.weight;
            count++;
        }
    }

    if (count != n - 1)
        cout << "\nGraph is disconnected. MST does not exist.\n";
    else
        cout << "\nTotal Minimum Distance: " << total << " m\n";

    return 0;
}