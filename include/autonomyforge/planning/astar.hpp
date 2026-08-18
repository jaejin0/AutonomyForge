#pragma once

#include "autonomyforge/core/occupancy_grid.hpp"

#include <cstddef>
#include <vector>

namespace autonomyforge {


using GridPath = std::vector<GridCell>;

struct AStarResult {
	GridPath path{};
	std::size_t nodes_expanded{0};

	[[nodiscard]]
	bool success() const noexcept {
		return !path.empty();
	}

	[[nodiscard]]
	std::size_t pathCost() const noexcept {
		return path.empty() ? 0 : path.size() - 1;
	}
}

class AStarPlanner {
public:
	[[nodiscard]]
	AStarResult plan(
		const OccupancyGrid& grid,
		const GridCell& start,
		const GridCell& goal,
		double radius
	) const;
};









}
