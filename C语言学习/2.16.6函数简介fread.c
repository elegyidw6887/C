/*
Fread函数简介
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include"Common.h"
//
//int main(void)
//{
//	/*
//	
//	Fread简介：
//		Fread结构：
//			size_t fwrite(
//				void *buffer,
//				//参数1：非const类型的地址，我们自己的字符数组，文件读出来的内容装在这里
//				size_t size,
//				//参数2：与fwrite相同
//				size_t count，
//				//参数3：与fwrite相同，注意读取的字节数要小于等于文件存在的字节数，如果多于会失败
//				FILE *stream
//				//参数4：文件指针
//			);
//			除了参数1之外，与fwrite的参数相同
//
//		返回值：
//			一下超过已有字节数，返回0
//			读取数恰好与文件字节数相同，返回1
//			在小于文件字节数时，会返回实际读取到的字节数
//
//	*/
//	FILE* pFile = fopen("D:\\Code\\基础学习\\C语言学习\\C语言学习\\Fopen\\2.16.6Fread.txt", "r");
//	char str[80] = { 0 };
//	/*int a = fread(&str, sizeof(char), 14, pFile);
//	int i = 0;
//	for (i = 0; i < 14; i++)
//	{
//		printf("%c", str[i]);
//	}*/
//	int a;
//	while (a = fread(str, sizeof(char), 1, pFile))
//	{
//		printf(str);
//		str[0] = 0;
//	}
//	//通过将fread作为while循环的条件，利用返回值来控制循环来输出读取结果
//	printf("\n");
//
//	fclose(pFile);
//
//	system("pause");
//	return 0;
//}