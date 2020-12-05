/*
函数调用的本质
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//void Fun(void)
//{
//	printf("Im aFunction!\n");
//}
//
//int main(void)
//{
//	/*
//	
//	由于函数调用的本质是 函数地址+参数列表，因此可以使用本质上符合规范的情况来调用函数
//
//	但是由于本台电脑地址每次运行程序的时候都会发生改变，因此无法用固定的地址来调用函数
//	*/
//	int* p = &Fun;
//	( (void (*) (void) ) p)();//利用自定义函数调用的原理来调用函数
//
//	void(*p1)(void) = Fun;
//	p1();//利用指针函数来调用函数
//
//
//	system("pause");
//	return 0;
//}