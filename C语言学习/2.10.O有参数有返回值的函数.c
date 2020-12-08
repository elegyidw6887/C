/*
有参数有返回值的函数
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//int Fun1(int* p, int nLength);
//
//int main(void)
//{
//	/*
//	
//	有参数有返回值的函数：
//		以寻找数组的最大值函数为例
//	*/
//
//	int a1[5] = { 82,35,62,91,32 };
//	int* p1 = &a1[0];
//	int Max = Fun1(p1, 5);
//	printf("数组中的最大值为：%d\n", Max);
//
//	system("pause");
//	return 0;
//}
//
//int Fun1(int* p, int nLength)
//{
//
//	int MaxNum;
//	MaxNum = p[0];
//	int i;
//	for (i = 0; i < nLength; i++)
//	{
//		if (MaxNum < p[i])
//		{
//			MaxNum = p[i];
//		}
//	}
//	return MaxNum;
//
//}