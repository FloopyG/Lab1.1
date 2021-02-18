#pragma once
class Point
{
	private:
		double x, y;

	public:
		double GetX() const { return x; }
		double GetY() const { return y; }
		void SetX(double value);
		void SetY(double value);

		bool Init(double x, double y);
		void Read();
		void Display();

		double distance();
};

