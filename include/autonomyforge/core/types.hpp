



namespace autonomyforge {

using AgentId = std::size_t;

struct Vec2 {
	double x;
	double y;
};


struct Rect {
	Vec2 min;
	Vec2 max;
}

struct AgentState {
	AgentId id(0);
	Vec2 start;
	Vec2 goal;
	double radius(0.25);
	double max_speed(1.0);
};


}
