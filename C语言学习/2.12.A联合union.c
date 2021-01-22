/*
联合union
*/

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//union Un1
//{
//	char c;
//	short s;
//	int i;
//
//};
//
//int main(void)
//{
//	/*
//	
//	联合：union
//		1.是一个在声明形式上与结构体基本相同的数据结构类型
//			union Un
//			{
//				char c;
//				short s;
//				int i;
//			};
//			变量的定义方式也与结构体相同
//
//		2.union的特点
//			所有的成员共享同一块内存，也就是所有的变量都是从同一个地址开始的（存在重叠现象）
//			同时具有数组的部分特性
//
//		3.联合的赋值
//			由于联合中变量的特性，可以给任意的变量进行初始化和赋值，这样其他的成员也会赋予相同的值
//
//	*/
//	union Un1 un1 = { .i = 23 };
//	printf("%p\n%p\n%p\n", &un1.c, &un1.s, &un1.i);//打印结果表明三者的起始地址是相同的
//	printf("%c,%hd,%d\n", un1.c, un1.s, un1.i);
//
//	un1.s = 22;
//	printf("%c,%hd,%d\n", un1.c, un1.s, un1.i);
//
//
//	system("pause");
//	return 0;
//}