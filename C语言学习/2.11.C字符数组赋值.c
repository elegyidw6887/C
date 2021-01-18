/*
 字符数组的赋值
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
//	字符数字的赋值：
//		字符数组在声明与初始化结束之后，与其他类型的数组相同，不可以再进行直接的字符串赋值，必须使用循环来对数组的每个变量来进行单个赋值
//	*/
//	char str[10] = "hello!";
//	printf("%s\n", str);
//
//	char* p1 = "world!";
//	printf("%s\n", p1);
//
//	int i = 0;
//	for (; *p1 != '\0'; p1++)
//	{
//
//		str[i] = *p1;
//		i++;
//	}//代码在运行结束之后，如果p1的个数小于str的个数，在结束之后str在大于p1的字符之后的字符依旧会保留
//	str[i] = '\0';
//	printf("%s\n", str);
//	/*
//	
//	在添加str[i] = '\0';代码之后，这个字符串就完整了，因此就解决了之前的问题
//	*/
//
//	/*
//	
//	字符串操作相关函数头：
//		string.h
//
//	字符串操作函数：
//		1.strcpy();
//			函数功能与上面的循环代码相同，是一个封包好的函数，其存在两个参数，第一个参数为目标字符数组，第二个为要进行赋值的字符数组
//		
//		2.其他内容后续讲解。
//	*/
//	char str2[10] = "Hello!";
//	char str3[10] = "World!";
//	strcpy(str2,str3);
//	printf("%s\n", str2);
//
//
//	
//	system("pause");
//	return 0;
//}