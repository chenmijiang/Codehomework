//访问类中的非静态成员加上类名
//this在继承的时候可以区分不同数据
//#include<iostream>
//using namespace std;
//
//class Point
//{
//public:
//	Point(int x = 0, int y = 0) :x(x), y(y)
//	{
//		count++;
//	}
//	Point(const Point& p) :x(p.x), y(p.y)
//	{
//		count++;
//	}
//	~Point() { count--; }
//	int getX() { return x; }
//	int getY() { return y; }
//	static void showCount()
//	{
//		cout << "  Object count=" << count << endl;
//	}
//private:
//	int x, y;
//	static int count;
//};
//
//int Point::count = 0;
//
//int main()
//{
//	//指向类函数成员的指针
//	void (*funcPtr)() = Point::showCount;
//	Point a(4, 5);
//	cout << "Point A:" << a.getX() << "," << a.getY();
//	funcPtr();
//
//	Point b(a);
//	cout << "Point B:" << b.getX() << "," << b.getY();
//	funcPtr();
//
//	return 0;
//}