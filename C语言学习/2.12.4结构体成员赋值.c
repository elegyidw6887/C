/*
�ṹ���Ա��ֵ
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
//	�ṹ���Ա��ֵ��
//
//		1.������Ա�ĸ�ֵ
//			���������ĸ�ֵ
//				��ֵ��ʽ�볣�渳ֵ��ʽ��ͬ
//			�ַ�����ֵ
//				strcpy������ֵ
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
//		2.�������ֽṹ
//			C99�ṩ���붨�����Ƶĸ�ֵ��ʽ�����ӷ���
//			��ʽ����
//			Stu1 = (struct StuInfo){ "���",23,173.0 };
//
//	*/
//	Stu1 = (struct StuInfo){ "���",23,173.0 };
//	printf("%s,%d,%0.1f\n", Stu1.Name, Stu1.Age, Stu1.High);
//	printf("\n");
//
//
//	system("pause");
//	return 0;
//}