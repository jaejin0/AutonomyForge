#pragma once

#include "autonomyforge/core/occupancy_grid.hpp"
#include "autonomyforge/core/types.hpp"
#include "autonomyforge/planning/aster.hpp"


#include <vector>

namespace autonomyforge {

struct SimulationSample {
	double time{0.0};
	AgentState state{};
};

struct SimulationResult {
	std::vector<SimulationSample> samples{};
	bool reached_goal{false};
};

class Simlulator {
public:
	explicit Simulator(double dt = 0.25);

	[[nodiscard]] SimulationResult run(
		const AgentInfo& agent,
		const GridPath& path,
		const OccupancyGrid& grid,		
	) const;

private:
	double dt_{0.25};
};


}
