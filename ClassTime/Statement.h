#pragma once
#include<iostream>
#include <conio.h>
#include<vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include<cstring>
#include <time.h>
#include <windows.h>
#include<windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

using namespace std;

int User();
void Login(int);
string InputPassWord();
int CheckUserMessage(char*, string, char);
vector<CTeacher> ReadTeaFromFile();
vector<CStudent> ReadStuFromFile();
vector<CCourse>  ReadCourseFromFile(int);
void WriteStutoFile(vector<CStudent>);
void WriteCourtoFile(vector<CCourse>, int );
//void MessageFromWho(int);
void MakeTimeTable(vector<CCourse>,int);
void ChangeMessage(int);
void Addition(CTeacher);
void Deletion(CTeacher);
void Replace(CTeacher);
