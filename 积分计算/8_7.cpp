//设置限制条件，使得边界点与中点为0是也满足代码

#include "Trapzint.h" 
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	MyFunction f;
	Trapz trapz(f);
	cout << "TRAPZ:" << setprecision(7) << trapz(0, 2, 1e-7) << endl;
	return 0;
}