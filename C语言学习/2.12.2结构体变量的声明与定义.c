/*
结构体变量的声明与定义
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//struct StuInfo
//{
//	char Name[10];
//	int Age;
//	double High;
//	char StuNum[20];
//}Stu1;
//
//int main(void)
//{
//	/*
//	
//	结构体变量的声明：
//		1.在定义结构体的同时进行变量的声明
//			struct StuInfo
//			{
//				char Name[10];
//				int Age;
//				double High;
//				char StuNum[20];
//			}SI1, SI2;
//			直接在结构体的分号之前添加要声明的结构体变量，如果有多个，则用逗号隔开
//			在这种情况下，结构体可以不添加名字，也就是StuInfo可以省去，但是这样的结构体是一次性的
//
//		2.利用结构体的名字来声明结构体变量
//			struct StuInfo SI2;
//			struct不可省去，可以在主函数或者自定义函数中的任意位置来进行声明
//
//		3.结构体变量的定义
//			struct StuInfo Stu2 = { "张昊",23,173.0,"MZ120201477" };
//			定义方式如上，并且两种声明方式都使用这一种定义方式
//			如果结构体放在主函数之前，并且变量定义也在此处，则为全局变量，此时系统会自动给结构体变量进行初始化
//	*/
//
//	struct StuInfo Stu2 = { "张昊",23,173.0,"MZ120201477" };/*
//															定义的时候添加的变量要与结构体中的成员相对应
//															*/
//
//
//
//	system("pause");
//	return 0;
//}