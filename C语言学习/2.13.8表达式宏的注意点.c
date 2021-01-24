/*
表达式宏的注意点
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//#define ONE 1+1
//#define TWO (1+1)
//
//int main(void)
//{
//	/*
//	
//	表达式宏
//		#define ONE 1+1
//		printf("%d\n", 2 * ONE);
//		如果按照常规四维，计算结果应该为 > ONE = 1+1 = 2，2*ONE = 2*2 = 4
//		但是实际结果为 > ONE = 1+1（这个表达式），2*ONE = 2*1+1 = 3
//		在将宏更改为
//			>#define TWO (1+1)
//		结果就变成了目的的4
//
//	
//	*/
//	printf("%d\n", 2 * ONE);
//	printf("%d\n", 2 * TWO);
//
//
//	system("pause");
//	return 0;
//}