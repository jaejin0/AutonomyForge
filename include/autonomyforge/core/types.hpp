#pragma once

#include <cstddef>
#include <vector>

namespace autonomyforge {

using AgentId = std::size_t;

struct Vec2 {
	double x{0.0};
	double y{0.0};
};


struct Rect {
	Vec2 min{};
	Vec2 max{};
};

struct AgentInfo {
	AgentId id(0);
	Vec2 start{};
	Vec2 goal{};
	double radius{0.25};
	double max_speed{1.0};
};

struct AgentState {
	AgentId id{0};
	Vec2 position{};
	Vec2 velocity{};
};

struct World {
	double width{0.0};
	double height{0.0};

	std::vector<Rect> obstacles{};
	std::vector<AgentInfo> agents{};
};







}
