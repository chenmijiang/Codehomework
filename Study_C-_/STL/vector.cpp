//#include<iostream>
//#include<vector>     //动态数组
//#include<algorithm>
//#include<functional>
//#include<ctime>      //time.h
//using namespace std;
//
////void STLConstructor()
////{
////	//struct STU
////	//{
////	//	int age;
////	//};
////	//vector<STU> vec;
////	//vector<string> vec;
////	//vector<char> vec;   //与string相似
////	vector<int> vec(5);
////	vector<int> vec1(5,31);
////	vector<int> vec3(vec);
////
////
////	//*********************//
////	vector<int>::iterator ite = vec1.begin();
////	vector<int>::iterator ite1 = vec1.end();
////
////	vector<int> vec4(ite, ite1);
////
////	for (int i = 0; i < 5; i++)
////	{
////		cout << vec1[i] << endl;
////	}
////}
//
////void STLCapacity()
////{
////	//*********************//编译器vs
////	vector<int> vec(2);
////	
////	
////	//cout << vec.capacity() << endl;
////
////	//vector<int> vec1(5);
////	//cout << vec1.capacity() << endl;
////	//vec1.push_back(1);      //容量 5+5/2
////	//cout << vec1.capacity() << endl;
////	//vec1.push_back(1);
////	//vec1.push_back(1);      //容量 7+7/2
////	//cout << vec1.capacity() << endl;
////	//vector<int>::iterator ite = vec.begin();
////	//vec.reserve(15);
////	//cout << vec.capacity() << endl;
////	//vec.resize(3);              //重新设置元素个数，缩小容量不变，放大容量改变
////	//vec.reserve(12);               //容量拓展
////	//cout << vec.size() << endl;   //有效元素个数
////	//cout << vec.capacity() << endl;
////	//cout << vec.empty();           //对象是否有元素
////
////
////}
//
//void fun(int i)
//{
//	cout << i << endl;
//}
////
////void STLDO()
////{
////	vector<int> vec;
////	for (int i = 0; i < 10; i++)
////	{
////		vec.push_back(i);
////	}
////
////	vector<int>::iterator ite = vec.begin();
////	//for (ite; ite != vec.end(); ite++)
////	//{
////	//	cout << *ite << endl;
////	//}
////	for_each(ite,vec.end(),fun);
////
////	//for (int i = 0; i < 10; i++)
////	//{
////	//	cout << vec[i] << endl;
////	//}
////	//for (int i = 0; i < 10; i++)
////	//{
////	//	cout << vec.at(i) << endl;
////	//}
////	//cout << vec.back();
////}
//
////void STLadd()
////{
////	vector<int> vec;
////	for (int i = 0; i < 10; i++)
////	{
////		vec.push_back(i);
////
////	}
////	//vec.insert(vec.begin()+2,12);
////	//vec.insert(vec.begin() + 2, 5,12);
////
////	//vector<int> vec1(5, 1);
////
////	//vec.insert(vec.begin() + 3, vec1.begin(), vec1.begin() + 3);
////	//vec.pop_back();      //删除尾部一个元素
////	//vec.erase(vec.begin()+3,vec.end());
////
////	//交换
////	//vec.swap(vec1);
////	//cout << vec.size() << endl;
////	//for_each(vec.begin(), vec.end(), fun);
////
////
////	//排序
////	//sort(vec.begin(), vec.end());
////	//sort(vec.begin(), vec.end(), greater<int>());
////	//for_each(vec.begin(), vec.end(), fun);
////}
//
//
////乱序
//void STLLUANXU()
//{
//	vector<int> vec;
//	vec.push_back(1);
//	vec.push_back(2);
//	vec.push_back(3);
//	vec.push_back(4);
//	vec.push_back(5);
//	srand((unsigned int)time(0));
//	random_shuffle(vec.begin(), vec.end());
//	for_each(vec.begin(), vec.end(), fun);
//}
//
//int main()
//{
//	//STLConstructor();
//	//STLCapacity();
//	//STLDO();
//	//STLadd();
//	STLLUANXU();
//
//	return 0;
//}