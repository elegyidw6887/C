/*
头文件相互包含
*/

//#include<stdio.h>
//#include<stdlib.h>
////#include"2.14.8互相包含1p8.h"
////#include"2.14.8互相包含2p8.h"
//
//#ifndef HAND1
//#define HAND1
//
//	#ifndef HAND2
//	#define HAND2
//
//		#ifndef HAND1
//		#define HAND1
//
//		#include"2.14.8互相包含2p8.h"
//
//		int Fun1(void)
//		{
//
//			return 0;
//		}
//
//		#endif
//
//	int Fun2(void)
//	{
//
//		return 0;
//	}
//
//	#endif
//
//int Fun1(void)
//{
//
//	return 0;
//}
//
//#endif
//
//int main(void)
//{
//	/*
//	
//	头文件互相包含：
//		会导致【死循环】的产生，相当于死循环的产生，但是可以使用宏来方式问题的产生
//	
//	*/
//
//
//	system("pause");
//	return 0;
//}