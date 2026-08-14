#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Edge {
	int target_vertex;
	int weight;
};

struct Vertex {
	int id;
	vertex<Edge> edges;
}; 

class GraphPlanner {
	private:
		// variables
		vector<Vertex> graph;

		// helper functions
		void set_vertices(vector<vector<int>> edges) {
			for (vector<vector<int>>::iterator iter = edges.begin(); iter != edges.end(); iter++) {
					
			}
		}

	public:
		GraphPlanner(vector<vector<int>> new_edges, vector<int> new_vertices = {}) {
			edges = new_edges;

			if (new_vertices == {}) {
				
			}
		}

		vector<int> dijkstra(int source, int target) {
			priority_queue<int> min_heap;

			for (vector<vector<int>>::iterator iter = graph.begin(); iter != graph.end(); iter++) {
				cout << (*iter)[0] << endl;		
			}
			return {};
		}
};


int main() {
	vector<vector<int>> graph = {{1, 3},
								 {2, 3}};

	GraphPlanner graph_planner(graph);
	graph_planner.dijkstra(1, 3);
};
