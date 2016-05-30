#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    //create the graph
    vector<int> graph[10001];
    graph[1].push_back(2);
    for (int i = 2; i < 10001; ++i) {
        graph[i].push_back(i-1);
        if (2*i < 10001) {
            graph[i].push_back(2*i);
        }
    }

    //find the shortest path from n to m
    int dist[10001];
    fill(dist, dist + 10001,-1);
    dist[n] = 0;
    bool visited[10001];
    fill(visited, visited + 10001, false);
    queue<int> q;
    q.push(n);
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        int l = graph[cur].size();
        for (int i = 0; i < l; ++i) {
            if (!visited[graph[cur].at(i)]) {
                visited[graph[cur].at(i)] = true;
                dist[graph[cur].at(i)] = dist[cur] + 1;
                q.push(graph[cur].at(i));
            }
        }
    }
    cout << dist[m] << endl;

    return 0;
}
