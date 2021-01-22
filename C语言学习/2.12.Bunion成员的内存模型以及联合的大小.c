/*
union成员的内存模型，union的内存大小
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//union Un1
//{
//	int i;
//	char c;
//	short s;
//};
//
//int main(void)
//{
//	/*
//	
//	union成员的内存模型：
//		简单的数值赋值情况
//			由于1字节大小可以存储的数值是从-128~127，因此只要大小存在于这个范围内的数值就可以完美的被存储在第一个字节内，从而出现下面第一次打印的情况
//			当数值大于127之后，比如128，c的值越界了，从127变成了-128
//	*/
//	union Un1 un1 = { 23 };
//	printf("%d\n%d\n%hd\n", un1.i, un1.c, un1.s);//第一次打印
//
//	un1.i = 128;
//	printf("%d\n%d\n%hd\n", un1.i, un1.c, un1.s);
//
//	/*
//	
//	union的大小
//		sizeof来计算
//	*/
//	printf("%d\n", sizeof(un1));
//
//
//	system("pause");
//	return 0;
//}