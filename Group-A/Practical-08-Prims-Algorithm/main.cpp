
#include <iostream>
using namespace std;

int main() {
    int n, cost[20][20], visited[20] = {0};
    string name[20];
    int total = 0, edges = 0;

    cout << "Enter number of departments: ";
    cin >> n;

    if (n < 1 || n > 20) {
        cout << "Invalid number of departments!";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter department " << i + 1 << " name: ";
        cin >> name[i];
    }

    cout << "Enter adjacency matrix (0 = no connection):\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> cost[i][j];

    visited[0] = 1;
    cout << "\nMinimum Spanning Tree:\n";

    while (edges < n - 1) {
        int min = 9999, u = -1, v = -1;

        for (int i = 0; i < n; i++)
            if (visited[i])
                for (int j = 0; j < n; j++)
                    if (!visited[j] && cost[i][j] > 0 &&
                        cost[i][j] < min) {
                        min = cost[i][j];
                        u = i;
                        v = j;
                    }

        if (u == -1) {
            cout << "Graph is disconnected. MST does not exist.\n";
            return 0;
        }

        cout << name[u] << " - " << name[v]
             << " : " << min << " m\n";

        visited[v] = 1;
        total += min;
        edges++;
    }

    cout << "\nTotal Minimum Distance: " << total << " m\n";
    return 0;
}