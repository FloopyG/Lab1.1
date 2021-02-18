#include "Point.h"
#include <iostream>
#include <cmath>

using namespace std;

void Point::SetX(double value) {
	x = value;
}

void Point::SetY(double value) {
	y = value;
}


bool Point::Init(double first, double second) {
	if (abs(first) <= 100 && abs(second) <= 100) {
		SetX(first);
		SetY(second);
		return true;
	}
	else {
		return false;
	}
}

void Point::Read() {
	double x, y;

	do {
		cout << endl;
		cout << "Enter X: "; cin >> x;
		cout << "Enter Y: "; cin >> y;
	} while (!Init(x, y));

}

void Point::Display() {
		cout << endl;
		cout << "X: " << x << endl;
		cout << "Y: " << y << endl;
}

double Point::distance() {
	return sqrt(x * x + y * y);
}