//链表
//#include<iostream>
//#include<list>
//#include<algorithm>
//using namespace std;
//
//struct Node
//{
//	int a;
//	char c;
//	Node(int m, char n)
//	{
//		a = m;
//		c = n;
//	}
//
//	bool operator == (const Node& f)
//	{
//		if (this->a == f.a && this->c == f.c)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	bool operator<(const Node& f)
//	{
//		if (this->a > f.a )
//		{
//			return true;
//		}
//		return false;
//	}
//
//};
//
//void fun(Node &d)
//{
//	cout << d.a << " " << d.c << endl;
//}
//
////void ListDefine()
////{
////	list<Node> ls(5);
////
////	Node no = { 12, 'a' };
////	list<Node> ls1(6, no);
////
////	list<Node> ls2(ls1);
////
////	list<Node> ls2(ls1.begin(),ls1.end());
////
////	list<Node>::iterator ite = ls1.begin();
////	ite++;   
////	//ite + 2;       //错误
////
////
////	for_each(ls2.begin(), ls2.end(), fun);
////}
//
////没有容量的概念
//
////void ListSize()
////{
////	Node no = { 12,'a' };
////	list<Node> ls(6, no);
////
////	//for_each(ls.begin(), ls.end(), fun);
////
////	////cout << ls.size() << endl;
////	//ls.resize(3);                          //改变list大小
////	//cout << ls.size() << endl;
////
////	//for_each (ls.begin(), ls.end(), fun);
////
////	cout << ls.empty() << endl;
////
////	
////}
//
////void ListCoutAdd()
////{
////	//Node no = { 12,'a' };
////	//list<Node> ls(6, no);
////
////	////for (list<Node>::iterator ite = ls.begin(); ite != ls.end(); ite++)
////	////{
////	////	cout << ite->a << " " << ite->c << endl;
////	////	//ite[2];
////	////}
////
////	//cout << ls.back().a << " " <<ls.back().c << endl;
////	//cout << ls.front().a << " " << ls.front().c << endl;
////
////	list<Node> ls;
////	/*Node no = { 12,'a' };*/
////	//ls.push_back(Node(12, 'a'));
////	//ls.push_front(Node(13, 'b'));
////	list<Node>::iterator ite = ls.begin();
////	ls.insert(ite, 3, Node(12, 'a'));
////
////}
//
//
//
////void ListDeleteChange()
////{
////	list<Node> ls;
////
////	ls.push_front(Node(12, 'a'));
////	ls.push_front(Node(13, 'b'));
////	ls.push_front(Node(12, 'a'));
////	ls.push_front(Node(15, 'd'));
////	ls.push_front(Node(16, 'e'));
////
////	//ls.pop_back();
////	//ls.pop_front();
////	
////	//list<Node>::iterator ite = ls.begin();
////	//ite++;
////	//ite++;
////	//ls.erase(ite, --ls.end());
////
////	//ls.clear();
////	//ls.remove(Node(14,'c'));        //remove函数类型与头文件不同
////
////	//ls.unique();                    //remove函数类型与头文件不同
////
////
////	//赋值
////	//ls.assign(4, Node(19, 'a'));
////
////	list<Node> ls1;
////	//ls1 = ls;
////	list<Node>::iterator ite = ls.begin();
////	ite++;
////
////	ls1.assign(ite, ls.end());
////
////	for_each(ls1.begin(), ls1.end(), fun);
////}
//
//void ListDo()
//{
//	list<Node> ls;
//	
//	ls.push_front(Node(15, 'd'));
//	ls.push_front(Node(16, 'e'));
//	ls.push_front(Node(13, 'b'));
//	ls.push_front(Node(12, 'a'));
//
//	list<Node>::iterator ite = find(ls.begin(), ls.end(), Node(15, 'd'));
//	cout << ite->a << " " << ite->c << endl;
//
//	//list<Node> ls1;
//
//	//ls1.push_back(Node(123, 'a'));
//
//	//ls.swap(ls1);
//
//	//for_each(ls.begin(), ls.end(), fun);
//
//	//ls.reverse();                       //元素倒置，要区别于 reserve 改变容量大小
//
//	//ls.sort();                            //仅实现 < 的重载
//
//	//list<Node> ls1;
//	//ls.push_front(Node(28, 'z'));
//	//ls.push_front(Node(19, 'x'));
//	//ls.push_front(Node(18, 'w'));
//
//
//	//ls1.merge(ls);
//
//	for_each(ls.begin(), ls.end(), fun);
//}
//
//int main()
//{
//	//ListDefine();
//	//ListSize();
//	//ListCoutAdd();
//	//ListDeleteChange();
//	ListDo();
//
//	return 0;
//}