/*
return详解
*/

#include<stdio.h>
#include<stdlib.h>

int Fun(void)
{

	return 12;
	printf("Im a Function!\n");//代码存在于return后方，因此此语句并不会执行 
}

int Fun2(void)
{

	int a;
	a = 12;

	if (a >= 10 && a < 20)
	{
		return 1;
	}

	if (a >= 20 && a < 30)
	{
		return 2;
	}

	return 3;

}

int main(void)
{
	/*

	return 数据;
		用于有返回值的函数，终止所在函数的执行（即运行到return后，函数的运行就结束，无论后方是否还有代码），
		并返回指定数据 。

		可以存在多个return，但是只执行代码逻辑上的第一个

		return也可以使用在无返回值的函数之中，直接用来终止函数的运行

	*/

	Fun();

	int a = Fun2();
	printf("%d,%d\n", a, Fun2());


	system("pause");
	return 0;
}