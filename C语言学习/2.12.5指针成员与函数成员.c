/*
指针成员与函数成员
*/

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//void Fun(void)
//{
//
//	printf("Im a Function!\n");
//}
//
//struct Pointer
//{
//	int* p1;
//};
//
//struct Fun
//{
//	void(*p2)(void);//函数指针相关内容
//};
//
//int main(void)
//{
//	/*
//	
//	指针成员与函数成员
//
//		1.指针成员
//			将指针变量当作结构体的成员，具体的使用与指针的各种使用相同，但是需要添加结构体相关的操作注意点
//
//	*/
//	int a[5] = { 1,2,3,4,5 };
//	struct Pointer st1 = { NULL };//栈区空间
//	st1.p1 = a;
//	printf("%d,%d\n", st1.p1[0], st1.p1[4]);
//
//	struct Pointer st2 = { (int*)malloc(20) };//堆区空间
//	st2.p1[0] = 0;
//	printf("%d\n", st2.p1[0]);
//	free(st2.p1);
//
//	/*
//	
//		2.函数成员
//			将函数作为结构体的成员，但是函数不能直接作为结构体的成员，也就是不能直接在结构体内书写函数结构（C++允许）
//			需要使用函数指针来指向对应的函数来完成将函数作为结构体成员的目的
//
//	*/
//	struct Fun st3 = { &Fun };
//	(st3.p2)();
//
//	system("pause");
//	return 0;
//}