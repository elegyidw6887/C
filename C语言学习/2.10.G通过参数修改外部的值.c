/*
通过参数修改外部的值
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//void Fun1(int b);
//void Fun2(int* b1);
//
//int main(void)
//{
//	/*
//	
//	通过参数修改外部的值：
//		2.想要通过参数来修改外部的值，需要对空间，也就是地址进行操作，在进行数据传递的时候，选择传递地址
//	*/
//
//	int a = 2;
//	printf("a = %d\n",a);
//	Fun1(a);
//	printf("a = %d\n", a);/*1.简单测试通过对自定义函数内的b进行数值更改，来查看a是否有更改
//
//						  实际测试后发现并不会通过修改b来更改a的值
//
//						*/
//
//	int* p1 = &a;
//	printf("a = %d\n地址为 = %p\n", *p1, p1);
//	Fun2(p1);
//	printf("a = %d\n地址为 = %p\n", *p1, p1);/*3.通过指针对地址进行操作以后，a的值也被修改
//										  
//										  */
//
//	system("pause");
//	return 0;
//}
//
//void Fun1(int b)
//{
//
//	printf("b = %d\n", b);
//	b = 12;
//	printf("b = %d\n", b);
//}
//
//void Fun2(int* b1)
//{
//	printf("b1 = %d\n地址为 = %p\n", *b1, b1);
//	*b1 = 12;//直接对地址进行操作
//	printf("b1 = %d\n地址为 = %p\n", *b1, b1);
//
//}