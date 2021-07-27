#pragma once

using namespace std;

class Circle {
public:
	Circle(double x_, double y_, double radius_, double speed_, double angle_) {
		x = x_ + angle_;
		y = y_ - speed_;
		radius = radius_;
		speed = speed_;
		angle = angle_;
	}
	void New_Circle(double new_speed, double new_angle) {
		x += new_angle;
		y -= new_speed;
		speed = new_speed;
		angle = new_angle;
	}
	double get_x() {
		return x;
	}
	double get_y() {
		return y;
	}
	double get_radius() {
		return radius;
	}
	double get_speed() {
		return speed;
	}
	double get_angle() {
		return angle;
	}
	~Circle() {}
private:
	double x;
	double y;
	double radius;
	double speed;
	double angle;
};