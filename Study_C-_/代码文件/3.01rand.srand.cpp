// rand加上srand()生成种子,种子的值不变会使得生成的数是伪随机数


//#include<iostream>
//#include<cstdlib>
//#include<time.h>
//using namespace std;
//
//int main()
//{
//	/*srand((unsigned)time(NULL));
//	for (int i = 0; i < 10; i++)
//	{
//		int a = 1 + rand() % 6;
//		cout << a << endl;
//	}*/
//
//	int n = 1;
//	while (n)
//	{
//		int a;
//		char c;
//		cout << "Enter a integer:";
//		cin >> a;
//		srand(a);
//		int b = 1 + rand() % 6;
//		cout << b << endl;
//		cout << "Break(c)" << endl;
//		cin >> c;
//		if (c == 'c')
//			n = 0;
//	}
//
//	
//	return 0;
//}