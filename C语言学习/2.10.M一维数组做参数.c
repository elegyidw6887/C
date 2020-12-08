/*
一维数组做参数
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//void Fun(int* p, int nLength);
//
//int main(void)
//{
//	/*
//	
//	一维数组作为参数进行传递：
//		在传递一维数组的时候，有两个关键元素需要传递，一是数组的首地址，二是数组的长度
//	*/
//
//	int a1[5] = { 82,35,62,91,32 };
//	int* p1 = &a1[0];
//	Fun(p1, 5);
//
//	system("pause");
//	return 0;
//}
//
//void Fun(int* p, int nLength)
//{
//
//	int i;
//	for (i = 0; i < nLength; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//
//}