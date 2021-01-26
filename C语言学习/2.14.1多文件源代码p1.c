#include"2.14.1多文件源代码p1.h"

int SUM(int a, int b)
{

	return(a + b);
}

int MUL(int a, int b)
{

	return(a * b);
}

int SUMwithStruct(int a, int b)
{

	struct Repeat c;
	c.a = 23;
	return(a + b + c.a);
}