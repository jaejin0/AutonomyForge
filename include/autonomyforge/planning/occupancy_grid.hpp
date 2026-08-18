

#include "autonomyforge/core/types.hpp"



namespace autonomyforge {	

struct GridCell {
	int x;
	int y;
}


class OccupancyGrid {
public:
	GridCell worldToCell(Vec2);
	Vec2 cellToWorld(GridCell);
	bool isInside(GridCell);
	bool isBlocked(GridCell, double radius);
}





}
