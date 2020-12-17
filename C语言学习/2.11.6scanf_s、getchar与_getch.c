/*
scanf_s getchar _getch
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	/*
	
	1.scanf_s函数：
		是微软的vs为了防止内存溢出所设计的更加安全的scanf函数，与常规的scanf函数有所区别，使用也有所不同
		在正常数值方面，scanf与s版本并无区别，但是在字符方面，如下所示
		（更多内容见函数原型部分）
	*/

	char c1;
	int a1;
	scanf_s("%c%d", &c1, 1, &a1);//在&c后面还需要有一个1来规定&c的大小为1
	printf("a1 = %d\nc1 = %c\n", a1, c1);
	while ((c1 = getchar()) != '\n' && c1 != EOF);//清空缓存区

	/*
	
	2.getchar函数：
		与scanf函数类似，但是一次只能读取一个字符
	*/

	c1 = getchar();
	printf("c1 = %c\n", c1);


	system("pause");
	return 0;
}