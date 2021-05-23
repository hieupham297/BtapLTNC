#include <iostream>
using namespace std;

struct Point{
	double x,y;
	Point(){};
	Point (double _x, double _y){
		_x = x;
		_y = y;
	}
};
void print(Point n){ 
	cout << "(" << n.x << ',' << n.y << ")";
}
int main(){
	Point n;
	cin >> n.x >> n.y;
	print (n);
	return 0;
}
