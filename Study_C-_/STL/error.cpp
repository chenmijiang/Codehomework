//#include<string>
//#include<vector>
//#include<list>
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	string str(5, 'a');
//	cout << str.capacity() << endl;
//	str.resize(4);
//	cout << str.capacity() << endl;
//	str.resize(17);
//	cout << str.capacity() << endl;       //ÈÝÁ¿   15 31  47...
//
//	vector<int> vec(6);
//	cout << vec.capacity() << endl;
//	vec.resize(4);
//	cout << vec.capacity() << endl;
//	vec.resize(11);
//	cout << vec.capacity() << endl;       //ÈÝÁ¿  1.5±¶
//
//	list<int> ls(5);                
//	cout << ls.size() << endl;
//	ls.resize(4);
//	cout << ls.size() << endl;
//	ls.resize(11);
//	cout << ls.size() << endl;
//
//	return 0;
//}