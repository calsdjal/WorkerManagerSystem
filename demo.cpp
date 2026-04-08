#include<iostream>
#include"workManager.h"
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
using namespace std;

int main()
{
    ////测试代码：
    //Worker* worker = NULL;
    //worker = new Employee(1, "张三", 1);
    //worker->showInfo();
    //delete worker;
    // 
    //worker = new Manager(2, "lisi", 2);
    //worker->showInfo();
    //delete worker;

    //worker = new Boss(3, "ss", 3);
    //worker->showInfo();
    //delete worker;

	//实例化管理者对象  instantiate a manager object
	WorkerManager wm;

	int choice = 0;  //store user' choice

	while (true)
	{
		wm.Show_Munu();
		cout << "please input your choice" << endl;
		  //accept user's choice
        cin >> choice;

        switch (choice)
        {
        case 0:  //退出系统
            wm.ExitSystem();
            break;
        case 1: //增加
            wm.Add_Emp();
            break;
        case 2:  //显示
            wm.Show_Emp();
            break;
        case 3:  //删除
            wm.Del_Emp();
            break;
           //switch中，代码过长要用{}封装
        case 4:  //修改
            wm.Mod_Emp();
            break;
        case 5:  //查找
            wm.Find_Emp();
            break;
        case 6:  //排序
			wm.Sort_Emp();
            break;
        case 7:  //清空
            break;
        default:
            system("cls");    //清屏操作   clear the screen
            break;
        }
	}
	
	//调用（invoke）展示菜单成员函数
	wm.Show_Munu();

	system("pause");
	return 0;
}
