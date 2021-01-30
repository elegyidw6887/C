/*
文件读写结构体
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include"Common.h"
//
//struct StuInfo
//{
//	int Num;
//	char Name[10];
//	short Age;
//	double High;
//};
//
//int main(void)
//{
//	/*
//	
//	读写结构体：
//		只有fwrite与fread可以实现这样的功能，另外两对函数无法实现
//	
//	*/
//	struct StuInfo Stu1 = { 114,"ZhangHao",23,173.0 };
//	FILE* pFile = fopen("D:\\Code\\基础学习\\C语言学习\\C语言学习\\Fopen\\2.16.8Struct.txt", "r");
//
//	//fwrite(&Stu1, sizeof(Stu1), 1, pFile);
//	//文件在读取并写入的时候要使用"a"
//	struct StuInfo Stu0;
//	fread(&Stu0, sizeof(Stu0), 1, pFile);
//	//文件在读取的时候要使用"r"
//	fclose(pFile);
//
//	system("pause");
//	return 0;
//}