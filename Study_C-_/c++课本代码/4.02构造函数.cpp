//构造函数的作用

/*#include<iostream>

using namespace std;

class Point
{
public:
	Point(int xx = 0, int yy = 0)
	{
		x = xx;
		y = yy;
	}
	Point(Point& p); */        
	//构造函数重载，a）初始值  b）复制构造函数
	/*复制构造函数被调用的3种情况
		当用一个对象去初始化该类的另一个对象
		如果函数的形参是类的对象，调用函数时，进行形参和实参结合
		如果函数的返回值是类的对象，函数执行完成返回调用者时
	*/
	
	
	
	/*int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
private:
	int x, y;
};

Point::Point(Point& p)
{
	x = p.x;
	y = p.y;
	cout << "Calling the copy constructor" << endl;
}

void fun1(Point p)
{
	cout << p.getX() << endl;
}

Point fun2()
{
	Point a(1, 2);
	return a;
}

int main()
{
	Point a(4, 5);
	Point b = a;
	cout << b.getX() << endl;
	fun1(b);
	b = fun2();
	cout << b.getX() << endl;

	return 0;
}*/