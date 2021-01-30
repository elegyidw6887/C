/*
Fputs与Fgets
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include"Common.h"
//
//int main(void)
//{
//	/*
//	
//	Fputs与Fgets：
//		一次性读写一行的内容
//
//	Fputs：
//		结构：
//			int fputs(const char* str , FILE* stream);
//			//参数1为char类型的地址，因此具有一定的局限性
//		返回值：
//			成功返回0
//			失败返回EOF（-1）
//
//	Fgets：
//		结构：
//			char fgets(char *str , int n , FILE*stream);
//			//参数1，读取出来的数据存在哪里
//			//参数2，最大的读取量，不要超过参数1的长度
//			
//	*/
//	FILE* pFile = fopen("D:\\Code\\基础学习\\C语言学习\\C语言学习\\Fopen\\2.16.9Fputs与Fgets.txt", "r");
//	//fputs("Hello!", pFile);
//	//fputs("World!", pFile);
//	char str[20] = { 0 };
//	fgets(str, 13, pFile);
//	printf(str);
//
//	fclose(pFile);
//
//	system("pause");
//	return 0;
//}