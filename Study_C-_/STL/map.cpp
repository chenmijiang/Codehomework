#include<map>
#include<iostream>
#include<algorithm>
using namespace std;

void fun(pair<int ,char> pr)
{
	cout << pr.first << " " << pr.second << endl;
}

void MapConstruct()
{
	typedef pair<int, char> in_pair;
	map<int, char> mp;
	mp.insert(in_pair(1, 'a'));
	mp.insert(in_pair(2, 'b'));

	for_each(mp.begin(), mp.end(), fun);
}

int main()
{

	MapConstruct();
	return 0;
}