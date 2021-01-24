/*
参数宏的使用方法
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//#define PRINTF(x) printf("%d\n",x)
//#define PRINTF2(x,y) printf("%d,%d\n",x,y)
//#define SUM(x,y) ((x)+(y))
//#define MUL(x,y) ((x)*(y))
//
//int main(void)
//{
//	/*
//	
//	参数宏：
//		是指将宏定义为有参数的宏，如同有参数的函数一样
//			>#define PRINTF(x) printf("%d\n",x)
//			>PRINTF(23);
//		（宏的核心就是替换）
//	
//	*/
//	PRINTF(23);
//	PRINTF2(22, 23);
//	printf("%d\n", SUM(22, 23));
//	printf("%d\n", MUL(22, 23));
//
//
//	system("pause");
//	return 0;
//}