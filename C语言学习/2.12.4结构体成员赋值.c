/*
结构体成员赋值
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//struct StuInfo
//{
//	char Name[10];
//	int Age;
//	double High;
//};
//
//int main(void)
//{
//	struct StuInfo Stu1 = { "ZhangHao",21,173.0 };
//	/*
//	
//	结构体成员赋值：
//
//		1.单个成员的赋值
//			正常变量的赋值
//				赋值方式与常规赋值方式相同
//			字符串赋值
//				strcpy函数赋值
//	
//	*/
//	printf("%s,%d,%0.1f\n", Stu1.Name, Stu1.Age, Stu1.High);
//	printf("\n");
//	Stu1.Age = 22;
//	strcpy(Stu1.Name, "ZHANGHAO");
//	printf("%s,%d,%0.1f\n", Stu1.Name, Stu1.Age, Stu1.High);
//	printf("\n");
//
//	/*
//	
//		2.复合文字结构
//			C99提供的与定义类似的赋值方式，更加方便
//			形式如下
//			Stu1 = (struct StuInfo){ "张昊",23,173.0 };
//
//	*/
//	Stu1 = (struct StuInfo){ "张昊",23,173.0 };
//	printf("%s,%d,%0.1f\n", Stu1.Name, Stu1.Age, Stu1.High);
//	printf("\n");
//
//
//	system("pause");
//	return 0;
//}