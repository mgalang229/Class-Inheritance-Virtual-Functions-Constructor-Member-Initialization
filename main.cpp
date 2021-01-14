#include <bits/stdc++.h>

using namespace std;

class Shape {
	protected:
		int width, height;
	public:
		Shape(int a = 0, int b = 0) {
			width = a;
			height = b;
		}
		virtual int Area() {
			return 0;
		}
};

class Rectangle: public Shape {
	public:
		Rectangle(int a = 0, int b = 0) : Shape(a, b) {};
		int Area() {
			cout << "Rectangle class area: ";
			return (width * height);
		}
};

class Triangle: public Shape {
	public:
		Triangle(int a = 0, int b = 0) : Shape(a, b) {};
		int Area() {
			cout << "Triangle class area: ";
			return (width * height / 2);
		}
};

int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	Shape* shape;
	Rectangle rec(10, 7);
	Triangle tri(10, 5);
	shape = &rec;
	cout << shape->Area() << endl;
	shape = &tri;
	cout << shape->Area() << endl;
	return 0;
}
