#include <iostream>
#include <vector>

using namespace std;
//6.1
/*
int dijkstra(const vector<vector<int>>& matrix, int s, int f) {
    int n = matrix.size();
    const int INF = 1e9;
    vector<int> dist(n, INF);
    vector<bool> used(n, false);
    dist[s] = 0;

    for (int i = 0; i < n; i++) {
        int u = -1;
        for (int j = 0; j < n; j++) {
            if (!used[j] && (u == -1 || dist[j] < dist[u])) {
                u = j;
            }
        }
        if (u == -1 || dist[u] == INF)
            break; 
        used[u] = true;
        for (int v = 0; v < n; v++) {
            if (matrix[u][v] != -1 && dist[u] + matrix[u][v] < dist[v]) {
                dist[v] = dist[u] + matrix[u][v];
            }
        }
    }
    return (dist[f] == INF ? -1 : dist[f]);
}

int main() {
    int n, s, f;
    cin >> n >> s >> f;
    s--; 
    f--; 
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << dijkstra(matrix, s, f);
    return 0;
}
*/
//6.2

const int INF = 1e9;

int find_min_cost(int N, const vector<int>& fuel_cost, const vector<vector<int>>& graph) {
    vector<int> dist(N, INF);
    vector<bool> used(N);
    dist[0] = 0; 

    for (int step = 0; step < N; ++step) {
        int u = -1;
        for (int i = 0; i < N; ++i) {
            if (!used[i] && (u == -1 || dist[i] < dist[u])) {
                u = i;
            }
        }

        if (u == -1 || dist[u] == INF)
            break; 

        used[u] = true;

        for (int v : graph[u]) {
            int cost = dist[u] + fuel_cost[u]; 
            if (cost < dist[v]) {
                dist[v] = cost;
            }
        }
    }

    return dist[N - 1] == INF ? -1 : dist[N - 1]; 
}

int main() {
    int N;
    cin >> N;

    vector<int> fuel_cost(N);
    for (int i = 0; i < N; ++i) {
        cin >> fuel_cost[i];
    }

    int M;
    cin >> M;
    vector<vector<int>> graph(N);

    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        a--; b--; 
        graph[a].push_back(b);
        graph[b].push_back(a); 
    }

    int result = find_min_cost(N, fuel_cost, graph);
    cout << result << endl;

    return 0;
}




