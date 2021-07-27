#pragma once

class Block {
public:
	Block(double x_left_, double y_down_, double x_right_, double y_up_) {
		x_left = x_left_;
		y_down = y_down_;
		x_right = x_right_;
		y_up = y_up_;
	}
	double get_x_left() {
		return x_left;
	}
	double get_y_down() {
		return y_down;
	}
	double get_x_right() {
		return x_right;
	}
	double get_y_up() {
		return y_up;
	}
	 ~Block() {}
private:
	double x_left;
	double y_down;
	double x_right;
	double y_up;
};