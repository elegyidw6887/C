/*
字符串操作函数
*/

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main(void)
//{
//	/*
//	
//	1.strcpy与strcpy_s函数
//		与scanf函数类似，由于微软担心越界问题而添加了一个strcpy_s版本来确保安全性，但是移植性会下降，二者的正常使用没有任何区别
//		strcpy函数在程序运行结束之后报错
//		strcpy_s函数在执行到本条语句的时候就报错
//
//	2.strncpy函数
//		比strcpy函数多一个参数：复制几个字符
//		strncpy(str1,str2,number);
//		同时安全性与strcpy的安全性相同
//
//	3.strncpy_s函数
//		比strncpy函数安全性更高，是微软设计的VS专用的
//		其余的内容均无区别
//
//	*/
//
//
//	system("pause");
//	return 0;
//}