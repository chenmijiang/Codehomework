#include "Trapzint.h"
#include<cmath>

double MyFunction::operator () (double x)const
{
	//为了方便地求函数值有负数的的情况，加上fabs,里面添加函数解析式
	return fabs(log(1.0 + x) / (1.0 + x * x));   
}



double Trapz::operator () (double a, double b, double eps) const
{
	bool done = false;
	int n = 1;
	double h = b - a;
	double tn = h * (f(a) + f(b)) / 2;
	double t2n;
	do
	{
		double sum = 0, smc = 0;
		for (int k = 0; k < n; k++)
		{
			double x = a + (k + 0.5) * h;
			sum += f(x);
		}
		t2n = (tn + h * sum) / 2.0;

		//防止出现边界与中点为相等（或为0）的情况,提高精度
		//***************************************
		/*for (int k = 0; k < (2*n); k++)
		{
			double x = a + (k + 0.5) * h / 2;
			smc += f(x);
		}
		double smck = (t2n + h * smc / 2) / 2.0;*/
		//***************************************
		//添加了t2n判断，前提条件是积分存在，否则出现死循环
		if ( (fabs(t2n - tn) < eps) && t2n )
		{
			done = true;
		}
		else
		{
			tn = t2n;
			n *= 2;
			h /= 2;
		}

	} while (!done);
	return t2n;
}