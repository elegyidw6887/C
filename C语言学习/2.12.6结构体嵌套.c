/*
结构体嵌套
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
//};
//
//struct TeaInfo
//{
//	char Name[10];
//	int Age;
//	struct StuInfo Stu1;
//};
//
//int main(void)
//{
//	/*
//	
//	结构体嵌套
//		将结构体作为其他结构体的成员，这种情况就是结构体嵌套
//	*/
//	struct TeaInfo Te1 = { "老张",23,{"小张",23} };
//	printf("%s,%d\n", Te1.Name, Te1.Age);
//	printf("\n");
//	printf("%s,%d\n", Te1.Stu1.Name, Te1.Stu1.Age);
//	printf("\n");
//	strcpy(Te1.Stu1.Name, "张昊");
//	printf("%s\n", Te1.Stu1.Name);
//
//
//	system("pause");
//	return 0;
//}