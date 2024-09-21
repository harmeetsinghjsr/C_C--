#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>

using namespace std;

const int MOD = 1000000007;

// Function to calculate factorial modulo MOD
int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact = (1LL * fact * i) % MOD; // Use 1LL to avoid overflow
    }
    return fact;
}

// BFS to find a connected component in the graph
void bfs(int node, vector<vector<int>>& adjList, unordered_set<int>& visited) {
    queue<int> q;
    q.push(node);
    visited.insert(node);

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        for (int neighbor : adjList[curr]) {
            if (visited.find(neighbor) == visited.end()) {
                q.push(neighbor);
                visited.insert(neighbor);
            }
        }
    }
}

int countMatrixArrangements(int N, int K, vector<vector<int>>& matrix) {
    vector<vector<int>> adjList(2 * N); // Adjacency list for the graph

    // Add edges based on swap conditions
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            bool canSwapRows = true, canSwapCols = true;

            for (int k = 0; k < N; k++) {
                if (matrix[i][k] + matrix[j][k] > K) canSwapRows = false;
                if (matrix[k][i] + matrix[k][j] > K) canSwapCols = false;
            }

            if (canSwapRows) {
                adjList[i].push_back(j);
                adjList[j].push_back(i);
            }
            if (canSwapCols) {
                adjList[N + i].push_back(N + j);
                adjList[N + j].push_back(N + i);
            }
        }
    }

    // Find connected components and calculate arrangements
    int ans = 1;
    unordered_set<int> visited;

    for (int i = 0; i < 2 * N; i++) {
        if (visited.find(i) == visited.end()) {
            bfs(i, adjList, visited);
            ans = (1LL * ans * factorial(visited.size())) % MOD;
        }
    }

    return ans;
}

int main() {
    int N, K;
    cin >> N >> K;

    vector<vector<int>> matrix(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    int result = countMatrixArrangements(N, K, matrix);
    cout << result << endl;

    return 0;
}