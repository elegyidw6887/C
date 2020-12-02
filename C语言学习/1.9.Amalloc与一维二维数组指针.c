/*
malloc与一维二维数组指针
*/

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main(void)
//{
//	/*
//	
//	一维数组指针与malloc
//	*/
//	int(*p)[5] = (int(*)[5])malloc(sizeof(int) * 5);//int(*)[5]，数组指针部分内容回顾
//	free(p);
//
//	int a[5];
//	int(*p)[5] = &a[0];//与上面的代码等效
//
//	/*
//	
//	在二维数组指针方面也与正常情况相同，使用的方法也相同
//	*/
//
//	system("pause");
//	return 0;
//}