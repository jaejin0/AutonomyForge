#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class GraphPlanner {
	private:
		vector<vector<int>> graph;	

	public:
		GraphPlanner(vector<vector<int>> new_graph) {
			graph = new_graph;	
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
