#include "Class.h"
#include "Statement.h"


int main()
{
	while (1)
	{
		cout << "--------------------Welcome--------------------" << endl;
		int key = User();
		Login(key);
		cout << "\n----------------------Bye----------------------" << endl;
		char S;
		cout << "是否退出周课表（Y OR N）:";
		cin >> S;
		if (S=='Y') { break; }
	}
	
	return 0;
}


//密码登入，对应身份
int User()
{
	int key;
	char def;
	char username[10];
	string password;

	while(1)
	{
		cout << "请问你的身份是教师（T）还是学生（S）";
		cin >> def;
		cout << "用户名：";
		cin >> username;
		cout << "密码:";
		password = InputPassWord();

		key = CheckUserMessage(username, password, def);

		if (key == 0)
		{
			MessageBox(NULL, TEXT("用户信息错误，请重新输入！！！"), TEXT("警告"), MB_OK);
			cout << "\n";
		}
		else break;
    }
	return key;
}



//登入界面
void Login(int key)
{
	if ((key/100) == 1)
	{
		CStudent student;
		student.Logini(key);
	}
	else
	{
		CTeacher teacher;
		teacher.Logini(key);
	}
}

