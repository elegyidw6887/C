/*
文件写入数据fwrite
*/
//#define _CRT_SECURE_NO_WARNINGS
//
//#include"Common.h"
//
//int main(void)
//{
//	/*
//	
//	操作文件：
//		写：
//			一次写入指定字节数：fwrite();
//			一次写入一行：fputs();
//			格式化写入：fprintf();
//
//		读：
//			一次读取指定字节数：fread();
//			一次读一行：fgets();
//			格式化读：fscan();
//		（以上读写按照对应的功能配套使用，怎么写入就怎么读取，如果写入与读取方式不成对使用也可以使用，但是可能会需要更多的操作
//			三组函数可以互相替代，实际中根据需要零活使用，但是也可以永远使用fwrite）
//
//		其他函数：
//
//	Fwrite简介：
//		Fwrite结构：
//			size_t fwrite(
//				const void *buffer,
//				//参数1：要【写入】文件的数据首地址，可以是字符串，可以是数组，可以是结构体
//				size_t size,
//				//参数2：与参数3配合使用，一般为sizeof(类型)
//				size_t count,
//				//参数3：参数2*参数3之后得到的结果为要写入的字节数，该类型的数据有几个，二者的乘机需要小于等于参数1的个数，否则会越界
//				FILE *stream
//				//参数4：文件指针
//			);
//			返回值：写入成功为实际写入的字符数，写入失败会返回0
//	
//	*/
//	FILE* pFile = fopen("D:\\Code\\基础学习\\C语言学习\\C语言学习\\Fopen\\2.16.4Fwrite.txt", "a");
//	char* str = "Hello!World!";
//	fwrite(str, sizeof(char), strlen(str) + 1, pFile);
//	//strlen(str) + 1中的+1为字符串中的\0
//	int a = errno;
//
//	fclose(pFile);
//
//	system("pause");
//	return 0;
//}