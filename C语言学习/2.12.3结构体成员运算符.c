/*
结构体成员运算符与成员访问
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
//};
//
//int main(void)
//{
//	/*
//	
//	访问成员：
//
//		1.实例变量
//			有空间的就是实例变量，如struct StuInfo Stu1
//			在访问成员的时候，使用如下格式
//			Stu1.Age;
//			变量名称 + . + 成员
//			(&Stu1)->Age;同样也是可以的
//
//	*/
//	struct StuInfo Stu1 = { "ZHANGHAO",23,173.0,"MZ120201477" };
//	Stu1.Age;
//	printf("%s,%d,%f,%s\n", Stu1.Name, Stu1.Age, Stu1.High, Stu1.StuNum);
//	printf("\n");
//
//	/*
//	
//		2.指针变量
//			指针就是指针类型，如struct StuInfo* p1 = &Stu1;
//			由于是指针类型，必须指向空间，要么用取址运算符&，或者malloc空间
//			访问成员的时候，使用如下格式
//			p1->Age;
//			变量名称 + -> + 成员
//			(*p1).Age同样也是可以的
//
//	*/
//
//	struct StuInfo* p1 = &Stu1;
//	p1->Age;
//	printf("%s,%d,%f,%s\n", p1->Name, p1->Age, p1->High, p1->StuNum);
//	printf("\n");
//
//
//
//	system("pause");
//	return 0;
//}