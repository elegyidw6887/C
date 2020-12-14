/*
函数地址
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//void Fun(void);
//int Fun2(int a);
//
//int main(void)
//{
//	/*
//
//	函数地址：
//		函数的名称就是函数的地址， 对函数使用取址运算符&，获得的也是函数的地址，二至只是在形式上存在区别，
//		实际使用效果没有任何的区别
//	*/
//
//	printf("%p,%p\n", Fun, &Fun);
//
//	/*
//
//	函数地址的类型：
//		函数的地址由三个方面决定
//		1.函数返回值的类型
//		2.参数类型
//		3.参数个数
//		例如一个函数：int Fun(int a,int b);
//			去掉前面的int与函数名称Fun，剩下的(int a,int b)就是这个函数地址的类型
//
//	函数指针：
//		利用函数地址类型的特点来声明一个函数类型的指针，以int*p为例
//
//	*/
//
//	int(*p)(int a) = Fun2;//在定义的时候要将(*p)放在指针类型前方
//	p(2);//函数调用的本质，地址 +（）
//
//
//	system("pause");
//	return 0;
//}
//
//void Fun(void)
//{
//
//	printf("Im a Function!");
//}
//
//int Fun2(int a)
//{
//
//	printf("Im a Function! and a = %d\n", a);
//	return 0;
//}