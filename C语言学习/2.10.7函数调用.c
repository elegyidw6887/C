/*
函数的调用
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//void Fun(void)
//{
//	printf("Im a Function!\n");
//}
//
//int main(void)
//{
//	/*
//	
//	函数调用：
//		函数调用的形式为：函数名称+参数列表，但是函数调用的本质是：函数地址+参数列表，因为函数的名称就是函数的地址（函数的首地址），因此形式如此
//	*/
//
//	Fun();
//
//	printf("%p\n", Fun);//因为函数名称本身就是函数的地址（首地址），因此不需要再使用取址运算符&，但是再次取地址也是没有问题
//
//	if (Fun == &Fun);
//	{
//		printf("Its OK!\n");
//	}
//
//	/*
//	
//	因为函数名称与函数地址之间的关系，因此使用&+函数名称的形式也可以对函数进行调用
//	*/
//
//	(&Fun)();//！此处要注意符号的优先级！
//
//
//	system("pause");
//	return 0;
//}