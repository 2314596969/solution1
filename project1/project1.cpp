// project1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>


int main()
{
	//下面这一行是打印语句
	/*
	这是多行注释
	这是注释行1
	这是注释行2
	*/
	150;//整型常量
	12.3;//
	printf("hello worid\n");//特殊字符\n：换行，每一行语句末尾要有分号;
	//写一个整型的常量
	//
	int abc;
	abc = 012;//=这是一个赋值语句,就是右边的值赋值给左边的变量
	printf("一个十进制012是:%d\n",abc);
	//十六进制：是以0x开头的数就是十六进制的数
	0x123; 0x1234;
	abc = 0x123;
	printf("0x123的十进制是%d\n",abc);
	return 0;
}

