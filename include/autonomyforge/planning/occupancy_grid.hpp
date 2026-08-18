

#include "autonomyforge/core/types.hpp"



namespace autonomyforge {	

struct GridCell {
	int x;
	int y;
}


class OccupancyGrid {
public:
	explicit OccupancyGrid(const World& world, double resolution = 1.0);

	[[nodiscard]]
	GridCell worldToCell(const Vec2& position) const;
	
	[[nodiscard]]
	Vec2 cellToWorld(const GridCell& cell) const;
		
	[[nodiscard]]
	bool isInside(const GridCell& cell) const;
	
	[[nodiscard]]
	bool isBlocked(const GridCell& cell, double radius) const;

	[[nodiscard]]
	int widthInCells() const noexcept;

	[[nodiscard]]
	int heightInCells() const noexcept;


private:
	const World& world_;

	double resolution_{1.0};

	int width_cells_{0};
	int height_cells_{0};
}
}





}
