/*
return返回多个值
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//int* Fun1(void)
//{
//	int* p1 = (int*)malloc(sizeof(int) * 2);//动态内存分配 
//	*p1 = 4;
//	p1[1] = 8;
//	return p1;
//}
//
//int main(void)
//{
//	/*
//
//	return并不能通过逗号来一次性返回多个值，但是可以使用首地址来返回一系列数字
//
//		堆区malloc与栈区数组均可以返回一系列数值，但是malloc更加方便，同时栈区数组使用时也会出现错误
//
//		栈区也是局部变量，具体的有效区域就是一个大括号的范围，结束之后自动释放，return之后则是越界错误调用
//	*/
//
//	int* a1 = Fun1();
//	printf("%d，%d\n", a1[0], a1[1]);
//	free(a1);//a1与p1存储着相同的地址，因此对二者中的任何一个使用free函数，都可以释放掉对应的空间 
//
//	system("pause");
//	return 0;
//}