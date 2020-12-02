/*
calloc函数介绍
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
//	calloc函数介绍：
//		1.功能：
//			申请一段空间数组
//
//		3.头文件：
//			<stdlib.h> 和 <malloc.h>
//			
//	*/
//
//	int* p1 = (int*)calloc(5, sizeof(int));//calloc两个参数中的第一个参数为申请数组的数值个数，第二个参数为数值的字节大小，此处以int类型为例
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", *p1);
//	}//经过输出后可以发现，calloc获得的空间已经被初始化为0，这是calloc与malloc最大的不同
//	free(p1);
//
//
//	system("pause");
//	return 0;
//}