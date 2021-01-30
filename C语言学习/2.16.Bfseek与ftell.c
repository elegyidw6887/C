/*
fseek与ftell
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include"Common.h"
//
//int main(void)
//{
//	/*
//	
//	fseek：
//		功能：
//			设置文件指针的位置
//		结构：
//			int fseek(
//				File *stream,
//				//参数1，文件指针
//				long offset,
//				//参数2，设置文件指针的位置
//				int origin
//				//参数3，具体位置
//			);
//		常用：
//			fseek(pFile , 0L , SEEK_SET);设置文件指针指向头
//			fseek(pFile , 10L , SEEK_SET);设置文件指针指向第10个字节
//			fseek(pFile , 10L , SEEK_CUR);设置文件指针指向当前位置右侧的10字节后
//			fseek(pFile , 0L , SEEK_END);设置文件指针指向结尾
//			fseek(pFile , -10L , SEEK_END);设置文件指针指向结尾向左侧10个字节
//
//	ftell：
//		功能：
//			返回文件指针当前的位置
//		结构：
//			long ftell(
//				FILE*stream
//			);
//			//参数1，文件指针
//
//	fseek与ftell合作：
//		使用fseek指向一个文件的结尾，再使用ftell返回结尾的位置，这样就能完整的返回整个文档的字节数
//
//	fclose：
//		文件关闭，更新到文件中，将内存中的对应空间释放
//
//	
//	*/
//	FILE* pFile = fopen("D:\\Code\\基础学习\\C语言学习\\C语言学习\\Fopen\\2.16.Bfseek与ftell.txt", "r");
//
//	char str[20] = { 0 };
//	fread(str, 1, 10, pFile);
//	printf(str);
//	printf("\n");
//
//	fseek(pFile, 3L, SEEK_CUR);
//	fread(str, 1, 5, pFile);
//	printf(str);
//	printf("\n");
//
//	int a = 0;
//	a = ftell(pFile);
//	printf("%d\n", a);
//
//	fseek(pFile, 0L, SEEK_END);
//	a = ftell(pFile);
//	printf("%d\n", a);
//
//	fclose(pFile);
//
//	system("pause");
//	return 0;
//}