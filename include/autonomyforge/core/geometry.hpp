
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

inline double l2_norm(const Vec2& v) {
	return std::sqrt(dot_product(v, v));
}

inline double distance(const Vec2& a, const Vec2& b) {
	return l2_norm(a - b);
}

inline Vec2 interpolation(const Vec2& a, const Vec2& b, double t) {
	return {(1 - t) * a.x + t * b.x, (1 - t) * a.y + t * b.y};
}

inline bool isPointInsideRect(const Vec2& v, const Rect& rect) {
	return (rect.min.x <= v.x && v.x <= rect.max.x) && (rect.min.y <= v.y && v.y <= rect.max.y);	
}

}
