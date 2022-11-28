#include <bits/stdc++.h>
using namespace std;

// Function to add edges
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
}

// Function to print adjacency list
void adjacencylist(vector<int> adj[], int V)
{
	for (int i = 0; i < V; i++) {
		cout << i << "->";
		for (int& x : adj[i]) {
			cout << x << " ";
		}
		cout << endl;
	}
}

// Function to initialize the adjacency list
// of the given graph
void initGraph(int V, int edges[20][19], int noOfEdges)
{
	// To represent graph as adjacency list
	vector<int> adj[V];

	// Traverse edges array and make edges
	for (int i = 0; i < noOfEdges; i++) {

		// Function call to make an edge
		addEdge(adj, edges[i][0], edges[i][1]);
	}

	// Function Call to print adjacency list
	adjacencylist(adj, V);
}

// Driver Code
int main()
{
	// Given vertices
	int V = 20;

	// Given edges
	int edges[20][19] = { 
	{ 0,1 }, 
	{ 0,2 }, 
	{ 0,3 }, 
	{ 0,5 }, 
	{ 1,4 }, 
	{ 2,3 }, 
	{ 5,15 },
	{ 5,6 }, 
	{ 6,7 }, 
	{ 7,8 },
	{ 8,9 }, 
	{ 9,10 }, 
	{ 10,16 }, 
	{ 5,12 }, 
	{ 12,13 },   
	{ 12,14 },
	{ 6,14 }, 
	{ 7,17 },
	{ 13,18 },
	{ 8,19 }
	};

	int noOfEdges = 20;

	// Function Call
	initGraph(V, edges, noOfEdges);

	return 0;
}
