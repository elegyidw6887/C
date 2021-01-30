/*
fopen_s与errno
*/

//#include"Common.h"
//#include<errno.h>
//
//int main(void)
//{
//	/*
//	
//	fopen_s：
//		使用与fopen有所不同，按照以往的_s版本，fopen_s会增加一个参数，使用如下
//
//	errno：
//		错误码，用于记录程序出现的错误代码，通过错误代码的值来方便错误的解决，<errno.h>头文件中定义
//		只能用于系统定义函数的错误码记录
//		本质上是一个int类型的函数，使用方法如下
//			>errno_t a;直接使用errno定义变量来存储错误码
//			>int a = errno;直接使用这种方法来让errno自动来存储错误码，需要放在出错代码行之后
//	
//	*/
//	FILE* pFlie = NULL;
//	fopen_s(&pFlie, "D:\\Code\\基础学习\\C语言学习\\C语言学习\\Fopen\\2.16.3Fopen_s.txt", "w");
//	errno_t a = fopen_s(&pFlie, "D:\\Code\\基础学习\\C语言学习\\C语言学习\\Fopen\\2.16.3Fopen_s.txt", "r");
//	int a = errno;
//
//
//	system("pause");
//	return 0;
//}