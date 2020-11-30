//友元函数可以通过对象名访问类的私有成员和保护成员
//友元类和友元函数破坏了private,protected
//不是继承，不是继承，不是继承


//#include<iostream>
//#include<cmath>
//
//using namespace std;

//class A
//{
//public:
//	void display() { cout << x << endl; }
//	int getX() { return x; }
//	friend class B;
//private:
//	int x;
//};
//
//class B
//{
//public:
//	void set(int i);
//	/*void display();*/
//private:
//	A a;
//};
//
//void B::set(int i)
//{
//	a.x = i;
//}
//
//int main()
//{
//
//	return 0;
//}

//class Point
//{
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y) {}
//	int getX() { return x; }
//	int getY() { return y; }
//	friend float dist(Point& p1, Point& p2);
//private:
//	int x, y;
//};
//
//float dist(Point& p1, Point& p2)
//{
//	double x = p1.x - p2.x;
//	double y = p1.y - p2.y;
//	return static_cast<float>(sqrt(x * x + y * y));
//}
//
//int main()
//{
//	Point myp1(1, 1), myp2(4, 5);
//	cout << "The distance is:";
//	cout << dist(myp1, myp2) << endl;
//
//	return 0;
//}