
#include "autonomyforge/core/types.hpp"

namespace autonomyforge {

inline Vec2 operator+(const Vec2& a, const Vec2& b) {
	return {a.x + b.x, a.y + b.y};
}

inline Vec2 operator-(const Vec2& a, const Vec2& b) {
	return {a.x - b.x, a.y - b.y};
}

inline double dot_product(const Vec2& a, const Vec2& b) {
	return a.x * b.x + a.y * b.y;
}


inline double l2_norm(const Vec2& a, const Vec2& b) {
	const Vec2 diff = a - b;
	return std::sqrt(dot_product(diff, diff));	
}




}
