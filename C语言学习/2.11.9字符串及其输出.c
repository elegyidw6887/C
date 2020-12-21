/*
字符串及其输出
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//void PrintString(char* p1);
//
//int main(void)
//{
//	/*
//
//	字符串：
//		1.字符串的概念：
//			以“\0”或者(0)结尾的【字符数组】就是【字符串】
//	*/
//
//	char str1[6] = { 'h','e','l','l','o','\0' };
//	printf("%s\n", str1);
//
//	/*
//
//	打印字符串：
//		1.使用“%s”来打印【字符串】，打印字符串的原理：
//			printf("%s!\n", str);
//			从给定的字符串地址开始，一个接一个的进行输出，遇到\0就结束输出，而且不管\0在任何位置，遇到\0就会结束输出
//
//		2.输出【字符数组】时，只能使用for循环来进行输出，不能使用%s进行输出，因为会输出多余的乱码
//
//		3.puts()函数输出【字符串】
//			相当于简化版的printf("%s",str);
//
//	*/
//
//	char str2[6] = { 'h','e','\0','l','l','o' };
//	printf("%s\n", str2);
//	printf("%s\n", &str2[1]);
//	puts(str1);
//	printf("\n");
//
//	PrintString(str1);//函数调用
//
//
//	system("pause");
//	return 0;
//}
//
//void PrintString(char* p1)
//{
//	for (p1; *p1 != '\0'; p1++)//深入理解循环的三要素
//	{
//		putchar(*p1);
//	}
//	printf("\n");
//	//使用自定义函数来实现类似puts功能的函数
//}