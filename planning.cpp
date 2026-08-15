#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;
using Pair = pair<double, int>;

struct Edge {
	int target_vertex;
	double weight = 0;

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

		vector<int> dijkstra(int source_id, int target_id = -1) {
			// input validation
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
			if (target_id != -1) { // if target given	
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
			}

			// data structures
			priority_queue<Pair, vector<Pair>, greater<Pair>> min_heap;
			unordered_map<int, double> distance; // id, distance
			unordered_map<int, int> previous; // id, id

			// initial values	
			for (const Vertex& v : graph) {
				distance[v.id] = numeric_limits<double>::infinity();
				previous[v.id] = -1;
			}
			distance[source_id] = 0;
			min_heap.push({0.0, source_id});

			// traversal loop
			while (!min_heap.empty()) {
				auto [cur_dist, cur_id] = min_heap.top();
				min_heap.pop();

				cout << cur_id << endl;	
				
				// for each edge of cur_id
			
			}

			return {};
		}
};


int main() {
	vector<Vertex> graph = {Vertex{1, {Edge{2, 10}}}, Vertex{2, {}}};
	
	GraphPlanner graph_planner(graph);
	
	try {
		graph_planner.dijkstra(1);
	}
	catch (const invalid_argument& e) {
		cerr << "An error found: " << e.what() << endl;
	}
	
	
};
