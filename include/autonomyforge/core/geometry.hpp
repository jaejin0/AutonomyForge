
#include "autonomyforge/core/types.hpp"

namespace autonomyforge {

inline Vec2 operator+(const Vec2& a, const Vec2& b) {
	return {a.x + b.x, a.y + b.y};
}

inline Vec2 operator-(const Vec2& a, const Vec2& b) {
	return {a.x - b.x, a.y - b.y};
}



}
