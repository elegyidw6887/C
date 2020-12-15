/*
有通项公式的递归函数，以数学应用为主
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//int FibonacciSeq(int a1);
//int Factorial(b1);
//
//int main(void)
//{
//	/*
//	
//	斐波那契数列举例：
//		1，1，2，3，5，8，13，21，34......
//		前两项为1，从第三项开始每一项均为前两项的和
//		f(n) = f(n-1) + f(n-2)
//
//	阶乘举例：
//		1*2*3*4*n*.......
//		从1开始一直乘到目的数值
//		f(n) = n*f(n-1)
//	*/
//
//	int i = 1;
//	printf("请输入一个大于等于1的数来计算对应的斐波那契数！\n");
//	scanf_s("%d", &i);
//	printf("对应的斐波那契数为%d\n", FibonacciSeq(i));
//
//
//	system("pause");
//	return 0;
//}
//
//int FibonacciSeq(int a1)
//{
//	//由于斐波那契数列的前两项为固定的1，因此需要单独分离出来a1=1与a1=2的情况，其余的项数使用通项公式
//	if (1 == a1)
//	{
//		return 1;
//	}
//	else if (2 == a1)
//	{
//		return 1;
//	}
//	else
//	{
//		return FibonacciSeq(a1 - 1) + FibonacciSeq(a1 - 2);//斐波那契数公式
//	}
//
//}
//
///*
//函数运算展开：
//以FibonacciSeq(5)为例，树形展开分析
//
//FibonacciSeq（5）= FibonacciSeq（4）+FibonacciSeq（3）；
//
//	FibonacciSeq（4）= FibonacciSeq（3）+FibonacciSeq（2）；
//
//		FibonacciSeq（3）= FibonacciSeq（2）+FibonacciSeq（1）；
//
//			FibonacciSeq（2）= 1；
//
//			FibonacciSeq（1）= 1；
//
//本质上是FibonacciSeq（2）与FibonacciSeq（1）也就是最小项的累加，形式上为一颗二叉树
//
//*/
//
//int Factorial(int b1)
//{
//	//输入一个数进行阶乘
//	if (b1 == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return b1 * Factorial(b1 - 1);//阶乘公式
//	}
//
//}