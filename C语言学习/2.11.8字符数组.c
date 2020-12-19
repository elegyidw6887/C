/*
字符数组
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	/*
//	
//	字符数组基础内容：
//		字符数字的基础内容与正常的数值数组完全相同
//
//
//	*/
//
//	char c[5] = { 'A','B','C' };
//	int i = 0;
//	c[3] = 'V';
//	c[4] = 'W';
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c,%d\n", c[i], c[i]);
//	}
//	int a = 0,
//		b = 0;
//	a = sizeof(c);
//	b = sizeof(char[5]);
//	printf("%d,%d\n", a, b);//数组的初始化、赋值、字节大小等内容
//
//	char* p = c;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c,%c\n", *(p + i), p[i]);
//	}//定义char类型的指针来遍历数组，以及下标运算等内容
//
//	system("pause");
//	return 0;
//}