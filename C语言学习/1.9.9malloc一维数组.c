/*
malloc一维数组
（主要目的为在程序中用可以主动释放的堆区空间来代替固定的栈区空间）
*/

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main(void)
//{
//	/*
//	
//	一维数组的特点：
//		一段【连续的】，存储数据的空间，数组首元素的地址就是数组的首地址，同时malloc申请的空间也有相同的特点，因此malloc的空间与数组有异曲同工之妙
//	*/
//
//	int* p1 = (int*)malloc(sizeof(int) * 5);//连续空间的申请
//
//	int a[5];
//	int* p2 = &a[0];//效果与上面的代码相同
//
//	/*
//	malloc一维数组的初始化：
//		malloc数组只能通过memset函数进行全0初始化，或者使用循环来对其中的变量进行赋值
//	*/
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", *(p1 + i));
//	}
//
//	memset(p1, 0, sizeof(int) * 5);//malloc数组的初始化，memset
//
//	for (i = 0; i < 5; i++)
//	{
//		*(p1 + i) = i;
//		printf("%d\n", *(p1 + i));
//	}//for循环给malloc数组赋值
//
//	free(p1);//使用结束后要对malloc空间进行释放
//
//	/*
//	
//	一维数组与malloc数组的区别：
//		使用：
//			二者的使用只在定义与申请的时候存在区别，正常使用不存在区别
//		malloc数组的独特性：
//			malloc数组可以指定任意的长度，而栈区数组的大小在定义的时候就必须指定
//			例：
//				unsigned int a;
//				scanf_s("%u,&a);
//				int* p = (int*)malloc(a);
//				free(p);
//			这种即为动态数组，动态分配空间
//	*/
//	
//
//	system("pause");
//	return 0;
//}