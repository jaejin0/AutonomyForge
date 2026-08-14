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
	vector<Edge> edges;
}; 

class GraphPlanner {
	private:
		// variables
		vector<Vertex> graph;

	public:
		GraphPlanner(vector<Vertex> new_graph) {
			graph = new_graph;
		}

		vector<int> dijkstra(int source_id, int target_id) {
			bool is_source_valid = false;
			for (vector<Vertex>::iterator iter = graph.begin(); iter != graph.end(); iter++) {
				if (iter->id == source_id) {
					is_source_valid = true;	
					break;
				}
			}
			if (!is_source_valid) {
				throw invalid_argument("Source ID does not exist in the current graph.");
			}
	
			bool is_target_valid = false;
			for (vector<Vertex>::iterator iter = graph.begin(); iter != graph.end(); iter++) {
				if (iter->id == target_id) {
					is_target_valid = true;	
					break;
				}
			}
			if (!is_target_valid) {
				throw invalid_argument("Target ID does not exist in the current graph.");
			}


			priority_queue<int> min_heap;

			for (vector<vector<int>>::iterator iter = graph.begin(); iter != graph.end(); iter++) {
				cout << iter->edges[0] << endl;		
			}
			return {};
		}
};


int main() {
	vector<Vertex> graph = {Vertex(1, Edge(2, 10)), Vertex(2, null)};
	
	GraphPlanner graph_planner(graph);
	
	graph_planner.dijkstra(1, 3);
};
