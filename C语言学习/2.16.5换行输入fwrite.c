/*
fwrite的换行输入
*/
//#define _CRT_SECURE_NO_WARNINGS
//
//#include"Common.h"
//#include<errno.h>
//
//int main(void)
//{
//	/*
//	
//	Fwrite输入换行：
//		在多个fwrite语句中直接用fwrite写入\n字符来实现换行
//
//	二进制输入换行：
//		文本模式使用“\n”来实现换行，而在二进制模式中，使用“\r\n”来实现换行
//	
//	*/
//	FILE* pFile = fopen("D:\\Code\\基础学习\\C语言学习\\C语言学习\\Fopen\\2.16.5Wrap.txt", "a");
//	char str0 = '\n';
//	char* str1 = "Silence wench!";
//	char* str2 = "I do not wish to be horny anymore,";
//	char* str3 = "I just want to be happy.";
//	fwrite(str1, sizeof(char), strlen(str1) + 1, pFile);
//	fwrite(&str0, sizeof(char), 1 , pFile);
//	fwrite(str2, sizeof(char), strlen(str2) + 1, pFile);
//	fwrite(&str0, sizeof(char), 1 , pFile);
//	fwrite(str3, sizeof(char), strlen(str3) + 1, pFile);
//	int a = errno;
//
// fclose(pFile);
//
//	system("pause");
//	return 0;
//}