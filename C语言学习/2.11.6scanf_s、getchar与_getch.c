/*
scanf_s getchar _getch
*/

//#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h>
//
//int main(void)
//{
//	/*
//	
//	1.scanf_s()函数：
//		是微软的vs为了防止内存溢出所设计的更加安全的scanf函数，与常规的scanf函数有所区别，使用也有所不同
//		在正常数值方面，scanf与s版本并无区别，但是在字符方面，如下所示
//		（更多内容见函数原型部分）
//	*/
//
//	char c1;
//	int a1;
//	scanf_s("%c%d", &c1, 1, &a1);//在&c后面还需要有一个1来规定&c的大小为1
//	printf("a1 = %d\nc1 = %c\n", a1, c1);
//	//while ((c1 = getchar()) != '\n' && c1 != EOF);//清空缓存区
//
//	while (1)
//	{
//		char c0;
//		c0 = getchar();
//		if ('\n' == c0 || EOF == c0)
//		{
//			break;
//		}
//	}//while缓存区清空代码的完整写法，其中的c0变量在while执行结束之后会自动释放内存，下面的代码需要再次清空缓存区时需要重新定义c0
//
//	/*
//	
//	2.getchar()函数：
//		与scanf函数类似，但是一次只能读取一个字符
//	*/
//
//	c1 = getchar();
//	printf("c1 = %c\n", c1);
//	while (1)
//	{
//		char c0;
//		c0 = getchar();
//		if ('\n' == c0 || EOF == c0)
//		{
//			break;
//		}
//	}
//
//	/*
//	
//	3._getch()函数：
//		与getchar类似，但是_getch函数不需要回车键来激活读取
//		需要添加新的头文件：conio.h
//	*/
//
//	c1 = _getch();
//	printf("c1 = %c\n", c1);
//
//
//	system("pause");
//	return 0;
//}