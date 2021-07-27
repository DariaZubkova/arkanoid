#pragma once

class Carriage {
public:
	Carriage(double x_down_, double x_up_, double y_down_, double y_up_, double speed_) {
		x_down = x_down_ + speed_;
		x_up = x_up_ + speed_;
		y_down = y_down_;
		y_up = y_up_;
		speed = speed_;
	}
	void Right_Carriage(double new_speed) {
		x_down += new_speed;
		x_up += new_speed;
		speed = new_speed;
	}
	void Left_Carriage(double new_speed) {
		x_down -= new_speed;
		x_up -= new_speed;
		speed = new_speed;
	}
	double get_x_down() {
		return x_down;
	}
	double get_y_down() {
		return y_down;
	}
	double get_x_up() {
		return x_up;
	}
	double get_y_up() {
		return y_up;
	}
	double get_speed() {
		return speed;
	}
	~Carriage() {}
private:
	double x_down;
	double x_up;
	double y_down;
	double y_up;
	double speed;
};