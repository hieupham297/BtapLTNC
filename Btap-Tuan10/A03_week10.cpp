#include <iostream>
using namespace std;

struct Point {
	double x, y;
	Point(){};
	Point (double _x, double _y){
		_x = x;
		_y = y;
	}
};

void print (Point p){
	cout << "(" << p.x << ',' << p.y << ")";
}

Point mid_point (const Point a, const Point b){
	Point c;
	c.x = (a.x+b.x)/2;
	c.y = (a.y+b.y)/2;
	return c;
}

int main(){
	Point a,b;
	cin >> a.x >> a.y >> b.x >> b.y;
	Point c = mid_point (a,b);
	print(c);
	return 0;
}
