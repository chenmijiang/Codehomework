#include "Class.h"
#include "Statement.h"

//可以分班级查看
void CClass::ViewTimetable(int key)
{
	vector<CCourse> Allcour;

	if ((key / 100) == 1)
	{
		int m;
		vector<CStudent> Allstu = ReadStuFromFile();
		for (int i = 0; i < Allstu.size(); i++)
		{
			if (key == Allstu[i].stukey)
			{
				m = Allstu[i].stuclassid / 10;
				break;
			}
		}
		 Allcour = ReadCourseFromFile(m);
		 MakeTimeTable(Allcour, m);
	}
	else 
	{
		int m,n;
		vector<CTeacher> AllTea = ReadTeaFromFile();
		for (int i = 0; i < AllTea.size(); i++)
		{
			if (key == AllTea[i].teakey)
			{
				m = i;
				break;
			}
		}
		for (int i = 0; i < AllTea[m].teaclassnum; i++)
		{
			n = AllTea[m].teaclassid[i] / 10;
			Allcour = ReadCourseFromFile(n);
			MakeTimeTable(Allcour, n);
		}
		
	}
	
	
}

//绘制周课表
void MakeTimeTable(vector<CCourse> Allcour,int key)
{
	string ClassSchedule[4][5];

	for (int i = 0; i < Allcour.size(); i++)
	{
		for (int j = 0; j < Allcour[i].coursenum; j++)
		{

			int a = ((Allcour[i].coursetime[j]) % 10 - 1);
			int b = ((Allcour[i].coursetime[j]) / 10 - 1);
			ClassSchedule[a][b] = Allcour[i].subject;
		}
	}
	cout << setw(25) << key << "班" << endl;
	cout << "      "<< "Mo" <<"    |    "<< "Tu" << "    |    "<< "We" <<"    |    "<< "Th" <<"    |    "<< "Fr" << endl;
	for (int m = 0; m < 4; m++)
	{
		for (int n = 0; n < 5; n++)
		{
			int i = 10 - ClassSchedule[m][n].size();
			for (int j = 0; j < i; j++)
			{
				ClassSchedule[m][n] += " ";
			}
		}
		cout << (m + 1) << "|" << ClassSchedule[m][0] << "|" << ClassSchedule[m][1] << "|" << ClassSchedule[m][2] << "|" << ClassSchedule[m][3] << "|" << ClassSchedule[m][4] << endl;
	}
}


int CStudent::Logini(int key)
{
	int i;
	cout << "\n-----------------Welcome to the student interface-----------------" << endl;
	Getmessage(key);
	while (1)
	{
		cout << "功能：（1）查看周课表 （2）退出" << endl;
		cin >> i;
		switch (i)
		{
		case 1:
			ViewTimetable(key);
			break;
		case 2:
			return 0;
		}
	}
	

}


void CStudent::Getmessage(int key)
{
	int m;
	vector<CTeacher> AllTea = ReadTeaFromFile();
	vector<CStudent> Allstu = ReadStuFromFile();

	for (int i = 0; i < Allstu.size(); i++)
	{
		if (key == Allstu[i].stukey)
		{
			m = i;
			break;
		}
	}

	int a = Allstu[m].stuclassid / 10;

	for (int i = 0; i < AllTea.size(); i++)
	{
		for (int j = 0; j < AllTea[i].teaclassnum; j++)
		{
			int b = AllTea[i].teaclassid[j] / 10;
			if ( a == b )
			{
				if (AllTea[i].teaclassid[j] != Allstu[m].stuclassid)//出错误
				{
					MessageBox(NULL, TEXT("老师更改了课表时间！！！"), TEXT("通知"), MB_OK);
					/*MessageFromWho(AllTea[i].teakey);*/
					//修改使消息仅触发一次
					Allstu[m].stuclassid = AllTea[i].teaclassid[j];
					WriteStutoFile(Allstu);
				}
			}
		}
	}
}

int CTeacher::Logini(int key)
{
	int i;
	cout << "\n-----------------Welcome to the teacher interface-----------------" << endl;
	while (1)
	{
		int m;
		vector<CTeacher> AllTea = ReadTeaFromFile();
		for (int i = 0; i < AllTea.size(); i++)
		{
			if (key == AllTea[i].teakey)
			{
				m = i;
				break;
			}
		}
		cout << "学科:" << AllTea[m].teasubj << "  " << AllTea[m].GetName() << endl;
		cout << "功能：（1）查看周课表 （2）修改周课表 （3）退出" << endl;
		cin >> i;
		switch (i)
		{
		case 1:
			ViewTimetable(key);
			break;
		case 2:
			Modifyclass(AllTea[m]);
			break;
		case 3:
			return 0;
		}
	}

}
void CTeacher::Modifyclass(CTeacher teacher)
{
	int i;
	cout << "课程修改：（1）增加 （2）删除 （3）替换" << endl;
	cin >> i;
	switch (i)
	{
	case 1:
		Addition(teacher);
		break;
	case 2:
		Deletion(teacher);
		break;
	case 3:
		Replace(teacher);
		break;
	}
}

