/*
参数个数不确定的函数
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<string.h>

void Fun1(int a, ...);

int main(void)
{
	/*
	
	参数个数不确定的函数的书写与调用：
		1.函数头书写：
			在填写参数列表时，第一个要书写实参，之后添加一个逗号“,”，之后填写三个点“...”

		2.函数的调用：
			调用的时候，要填写参数类表的个数以及对应个数的参数

		3.va_list与va_start函数的使用：
			va_list用于定义一个存储参数列表的变量
			va_start用于将参数列表保存到定义的变量之中
			二者均包含于<stdarg.h>头文件

		4.va相关其他函数的使用
			va_arg用于取对应数组变量中存储的数值

	*/

	Fun1(3, 12, 24, 36);
	//参数列表中参数的分析，(3, 12, 24, 36);，中的第一个“3”代表一共传递3个参数，后面的“12，24，36”为要传递的三个参数

	system("pause");
	return 0;
}

void Fun1(int a, ...)//指定位置参数的个数，其中的a存储的是参数列表的个数
{

	printf("Im a Function! with unkown number of Arguments\n");

	va_list ap;//定义一个va_list的变量，用于保存参数列表中的参数，步骤①
	va_start(ap, a);//将参数存储到ap数组变量中，步骤②
	//va_arg(ap, int);  通过va_arg来取参数
	int i = 0;
	int* p1 = (int*)malloc(sizeof(int)*a);//申请一个个数不确定的堆区数组

	if (p1 == NULL)//证明指针p1不是空指针
	{
		printf("堆区地址申请失败！\n");
	}
	else
	{
		for (i = 0; i < a; i++)
		{
			p1[i] = va_arg(ap, int);//将ap中的数值存储到p1指针数组中，步骤③
			printf("%ld\n", p1[i]);//打印读取的对应的数值
		}

	}
	free(p1);//堆区空间的释放

}