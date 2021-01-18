/*
字符串的输入
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main(void)
//{
//	/*
//	
//	字符串的输入也是同样的使用scanf函数进行
//		使用%s的时候不需要特意输入\0，其会自动的添加\0，而且在遇到空格的时候，会默认字符串的输入结束
//	*/
//	char str1[20];
//	scanf("%s", str1);//%s与%c处理空格的方式不相同
//	printf("%s\n", str1);
//
//	scanf_s("%s", str1, 19);/*
//							使用_s版本时，需要添加一个参数，这个参数为限定字符串的长度，由于%s会自动的添加一个\0，因此长度会比定义的短一个
//							而且当输入越界时，会取消读取，并添加\0
//							*/
//	printf("%s\n", str1);
//
//	/*
//	
//	gets(str)函数
//		使用与scanf相同，但是可以读取空格，需要注意内存大小防止越界
//		此函数也存在_s版本，gets_s(str)，具体的内容与scanf_s相同
//	*/
//	char str2[20];
//	gets(str2);
//	printf("%s\n", str2);
//
//	gets_s(str2, 19);
//	printf("%s\n", str2);
//
//
//	system("pause");
//	return 0;
//}