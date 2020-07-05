//静态变量加static 声明时会自动赋值0
//动态变量就是我们常用的数据声明


//#include<iostream>
//
//using namespace std;
//
//class Clock
//{
//public:
//	Clock();
//	void setTime(int newH, int newM, int newS);
//	void showTime();
//private:
//	int hour, minute, second;
//};
//
//Clock::Clock() :hour(0), minute(0), second(0) {}
//
//void Clock::setTime(int newH, int newM, int newS)
//{
//	hour = newH;
//	minute = newM;
//	newS = second;
//}
//
//void Clock::showTime()
//{
//	cout << hour << ":" << minute << ":" << second << endl;
//}
//Clock globClock;
//
//int main()
//{
//	cout << "First time output:" << endl;
//	globClock.showTime();
//	globClock.setTime(8, 30, 30);
//	Clock myClock(globClock);
//	cout << "Second time output:" << endl;
//	myClock.showTime();
//
//	return 0;
//}