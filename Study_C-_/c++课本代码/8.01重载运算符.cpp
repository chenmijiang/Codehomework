//面向对象的多态可分为：重载多态，强制多态，包含多态和参数多态
//运算符重载

//成员函数
//双目运算符

//#include<iostream>
//using namespace std;
//
//class Complex
//{
//public:
//	Complex(double r=0.0,double i=0.0):real(r),imag(i){}
//	Complex operator+(const Complex& c2)const;
//	Complex operator-(const Complex& c2)const;
//	void display()const;
//private:
//	double real;
//	double imag;
//};
//
//Complex Complex::operator+(const Complex& c2)const
//{
//	return Complex(real + c2.real, imag + c2.imag);
//}
//
//Complex Complex::operator-(const Complex& c2)const
//{
//	return Complex(real - c2.real, imag - c2.imag);
//}
//
//void Complex::display()const
//{
//	cout << "(" << real << "," << imag << ")" << endl;
//}
//
//int main()
//{
//	Complex c1(5, 4), c2(2, 10), c3;
//	cout << "c1="; c1.display();
//	cout << "c2="; c2.display();
//	c3 = c1 - c2;
//	cout << "c3=c1-c2="; c3.display();
//	c3 = c1 + c2;
//	cout << "c3=c1+c2="; c3.display();
//
//	return 0;
//}

//单目运算符

//#include<iostream>
//using namespace std;
//
//class Clock
//{
//public:
//	Clock(int hour = 0, int minute = 0, int second = 0);
//	void showTime()const;
//	Clock& operator++();
//	Clock operator++(int);
//private:
//	int hour, minute, second;
//};
//Clock::Clock(int hour/*=0*/, int minute/*=0*/, int second/*=0*/)
//{
//	if (0 <= hour && hour < 24 && 0 <= minute && minute < 60 && 0 <= second && second < 60)
//	{
//		this->hour = hour;
//		this->minute = minute;
//		this->second = second;
//	}
//	else
//		cout << "Time error!" << endl;
//}
//
//void Clock::showTime()const
//{
//	cout << hour << ":" << minute << ":" << second << endl;
//}
//
//Clock& Clock::operator++()
//{
//	second++;
//	if (second >= 60)
//	{
//		second -= 60;
//		minute++;
//		if (minute >= 60)
//		{
//			minute -= 60;
//			hour = (hour + 1) % 24;
//		}
//	}
//	return *this;
//}
//
////后置单目运算符有形参
//Clock Clock::operator++(int)
//{
//	Clock old = *this;
//	++(*this);
//	return old;
//}
//
//int main()
//{
//	Clock myClock(23, 59, 59);
//	cout << "First time output:";
//	myClock.showTime();
//	cout << "Show myClock++:   ";
//	(myClock++).showTime();
//	myClock.showTime();
//	cout << "Show++myClock:   ";
//	(++myClock).showTime();
//
//	return 0;
//}

//非成员函数
//#include<iostream>
//using namespace std;
//
//class Complex
//{
//public:
//	Complex(double r = 0.0, double i = 0.0) :real(r), imag(i){}
//	friend Complex operator+(const Complex& c1, const Complex& c2);
//	friend Complex operator-(const Complex& c1, const Complex& c2);
//	friend ostream &operator<<(ostream& out, const Complex& c);
//private:
//	double real;
//	double imag;
//};
//
//Complex operator+(const Complex& c1, const Complex& c2)
//{
//	return Complex(c1.real + c2.real, c1.imag + c2.imag);
//}
//
//Complex operator-(const Complex& c1, const Complex& c2)
//{
//	return Complex(c1.real - c2.real, c1.imag - c2.imag);
//}
//
//ostream &operator<<(ostream& out, const Complex& c)
//{
//	out << "(" << c.real << "," << c.imag << ")";
//	return out;
//}
//
//int main()
//{
//	Complex c1(5, 4), c2(2, 10), c3;
//	cout << "c1=" << c1 << endl;
//	cout << "c2=" << c2 << endl;
//	c3 = c1 - c2;
//	cout << "c3=c1-c2=" << c3 << endl;
//	c3 = c1 + c2;
//	cout << "c3=c1+c2=" << c3 << endl;
//
//	return 0;
//}
