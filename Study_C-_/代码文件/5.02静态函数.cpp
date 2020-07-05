//静态函数访问类中的非静态数据成员，必须通过对象名

//#include<iostream>
//
//using namespace std;
//
//class Point
//{
//public:
//	Point(int x = 0, int y = 0) :x(x),y(y)
//	{
//		count++;
//	}
//	Point(Point& p)
//	{
//		x = p.x;
//		y = p.y;
//		count++;
//	}
//	~Point() { count--; }
//	int getX() { return x; }
//	int getY() { return y; }
//	static void showCount()
//	{
//		cout << " Object count=" << count << endl;
//	}
//private:
//	int x, y;
//	static int count;
//};
//
//
//
//int Point::count = 0;
//
//int main()
//{
//	Point a(4, 5);
//	cout << "Point A:" << a.getX() << "," << a. getY();
//
//
//	//调用静态函数可以使用类名和对象名
//	Point::showCount();
//	Point b(a);
//	cout << "Point B:" << b.getX() << "," << b.getY();
//	b.showCount();
//
//
//	return 0;
//}