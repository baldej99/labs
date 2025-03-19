#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int INF = 1e9;

vector<int> getPath(vector<int>& from, int finish) {
	vector<int> path;
	for (int v = finish; v != -1; v = from[v])
		path.push_back(v);
	reverse(path.begin(), path.end());
	return path;
}

pair<int, vector<int>> bfs(vector<vector<int>>& maze, int start) {
	vector<int> dist(maze.size(), INF);
	vector<int> from(maze.size(), -1);
	queue<int> q;

	dist[start] = 0;	
	q.push(start);

	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (int to : maze[v]) {
			if (dist[to] > dist[v] + 1) {
				dist[to] = dist[v] + 1;
				from[to] = v;
				q.push(to);
			}
		}
	}
	return {dist[9], from};
}

int main() {
	vector<vector<int>> maze = {
		{1,2,4,5},//S
		{0},//A
		{0,3,4},//B
		{2,10},//C
		{0,2,7},//D
		{0,7},//E
		{7,8},//F
		{4,5,6,8,10},//G
		{6,7,9},//H
		{8,10},//I
		{7,9}//J
	};
	int start = 0;
	pair<int, vector<int>> result = bfs(maze, start);
	int dist = result.first;
	vector<int> from = result.second;
	cout << dist << endl;
	for (int v : getPath(from, 9))
		cout << v << " ";
	
}
	


