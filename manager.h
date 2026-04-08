#pragma once
#include<iostream>
#include<string>
using namespace std;
#include"worker.h"
class Manager :public Worker
{
public:


	//构造函数
	Manager(int id, string name, int dId);

	//显示个人信息
	virtual void showInfo();


	//获取岗位名称
	virtual string getDeptName();
};