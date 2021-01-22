/*
结构体数组
*/

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
//int main(void)
//{
//	/*
//	
//	结构体数组：
//		一个数组的每个成员都是结构体，这样的数组就是结构体数组
//
//	*/
//	struct StuInfo Stu1[3] = { {"ZH",23},{"WT",25},{"SJH",23} };
//	printf("%s,%d\n", Stu1[0].Name, Stu1[0].Age);
//	printf("%s,%d\n", Stu1[1].Name, Stu1[1].Age);
//	printf("%s,%d\n", Stu1[2].Name, Stu1[2].Age);
//	printf("\n");
//
//	Stu1[2] = (struct  StuInfo){ "XHH",25 };
//	printf("%s,%d\n", Stu1[2].Name, Stu1[2].Age);
//	printf("\n")''
//
//
//	system("pause");
//	return 0;
//}