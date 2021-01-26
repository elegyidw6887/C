/*
头文件重复包含
*/

//#include<stdio.h>
//#include<stdlib.h>
//#include"2.14.6多文件源代码p6.h"
//
//int main(void)
//{
//	/*
//	
//	头文件相互包含：
//		同一个结构体的声明在不同的头文件中可以多次重复的声明，不会有重定义稳定，define和typedef等都是类似的效果
//
//	重定义问题：
//		当在调用头文件的时候，如果对含有重复内容的重复调用，此时就会出现重定义的提醒
//
//	*/
//	struct Repeat m1;
//	m1.a = 23;
//	printf("%d\n", m1.a);
//
//
//
//	system("pause");
//	return 0;
//}