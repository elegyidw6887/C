/*
realloc函数介绍
*/

//#include<stdio.h>
//#include<stdlib.h>
//#include<malloc.h>
//#include<string.h>
//
//int main(void)
//{
//	/*
//	
//	realloc函数介绍
//	1.功能：
//		对malloc申请的空间的字节大小重新设置，也是通过对空间首地址进行操作
//
//	2.头文件：
//		<stdlib.h> 和 <malloc.h>
//
//	3.查看malloc申请的空间的字节数：
//		
//
//	*/
//	int* p1 = (int*)malloc(20);
//	int* p2 = realloc(p1, 24);/*
//							  realloc共有两个参数，第一个参数为要重新分配空间的malloc空间的首地址，第二个参数为要重新分配的空间的大小同时也会返回首地址
//							  而且并不会改变这个首地址（相当于在原来空间基础上进行增减）
//							  */
//	printf("%d\n", _msize(p1));/*
//							   一个新的函数：_msize();，函数参数为要查看字节数的空间的首地址，比如：_msize(p2);，就可以查看realloc之后的空间的大小
//							   返回的数值为size_t，也就是无符号整形
//							   */
//	printf("%p,%p\n", p1, p2);
//	printf("%d\n", _msize(p2));
//
//	free(p1);
//
//	/*
//	
//	如果在使用realloc进行空间的增加的时候，如果要增加的内存大小过大，从而导致realloc函数无法申请一个【连续的】符合需求的空间，有两种情况：
//
//	1.如果物理内存不足，则会返回一个NULL
//
//	2.如果在另一个内存上找到了符合大小的内存，则会导致realloc在新的内存上申请一个符合大小的【连续的】内存，这个时候内存的首地址会发生变化
//	（内存碎片）
//
//	*/
//
//
//	system("pause");
//	return 0;
//}