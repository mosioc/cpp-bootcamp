#pragma once

class Point {
public:
	constexpr Point() : x_{ 0 }, y_{ 0 } {}
	constexpr Point(int x, int y) : x_{ x }, y_{ y } {}

	constexpr int x() { return x_; }
	constexpr int y() { return y_; }
	void x(int xx) { x_ = xx; }
	void y(int yy) { y_ = yy; }
private:
	int x_;
	int y_;
};