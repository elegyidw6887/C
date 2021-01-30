/*
文本模式与二进制模式深入
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include"Common.h"
//
//int main(void)
//{
//	/*
//	
//	使用Fread来读取行结尾：
//		0x0A > 即为\n，在读取的时候，二进制模式的\r\n系统会自动的转换为\n，在读取的时候再转换为\r\n
//		在使用的时候，由于在Linux系统中，无论是文本模式还是二进制模式，结尾均为\n，因此考虑到移植性，建议使用文本模式
//
//	Feof函数：
//		检测文件结束的函数，在未结束（未检测到结尾）时，返回0，在结束时，返回1
//	
//	*/
//	FILE* pFile = fopen("D:\\Code\\基础学习\\C语言学习\\C语言学习\\Fopen\\2.16.7Feof.txt", "r");
//	int a = 0;
//	char str[80] = { 0 };
//	while (!feof(pFile))
//	{
//		a = fread(str, sizeof(char), 2, pFile);
//		printf(str);
//		str[0] = 0;
//		str[1] = 0;
//	}
//
//
//	system("pause");
//	return 0;
//}