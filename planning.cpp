#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

struct Edge {
	int target_vertex;
	float weight = 0;

	friend ostream& operator<<(ostream& os, const Edge& e) {
		os << "(target: " << e.target_vertex << ", weight: " << e.weight << ")" << endl;
	    return os;	
	};
};

struct Vertex {
	int id;
	vector<Edge> edges = {};

	friend ostream& operator<<(ostream& os, const Vertex& v) {
		os << "Vertex: " << v.id << endl;
		for (auto iter = v.edges.begin(); iter != v.edges.end(); iter++) {
			os << *iter;
		}
		return os;
	};
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
			for (auto iter = graph.begin(); iter != graph.end(); iter++) {
				if (iter->id == source_id) {
					is_source_valid = true;	
					break;
				}
			}
			if (!is_source_valid) {
				throw invalid_argument("Source ID does not exist in the current graph.");
			}
	
			bool is_target_valid = false;
			for (auto iter = graph.begin(); iter != graph.end(); iter++) {
				if (iter->id == target_id) {
					is_target_valid = true;	
					break;
				}
			}
			if (!is_target_valid) {
				throw invalid_argument("Target ID does not exist in the current graph.");
			}

			// memory
			priority_queue<int> min_heap;
			unordered_map<int, float> distance; // id, distance
			unordered_map<int, int> previous; // id, id
	
			for (auto iter = graph.begin(); iter != graph.end(); iter++) {
				distance.insert(make_pair(iter->id, numeric_limits<double>::infinity()));	
				if (iter != graph.begin()) {
					// add prev[v] = undefined
				}
			}
			

			return {};
		}
};


int main() {
	vector<Vertex> graph = {Vertex{1, {Edge{2, 10}}}, Vertex{2, {}}};
	
	GraphPlanner graph_planner(graph);
	
	try {
		graph_planner.dijkstra(1, 2);
	}
	catch (const invalid_argument& e) {
		cerr << "An error found: " << e.what() << endl;
	}
	
	
};
