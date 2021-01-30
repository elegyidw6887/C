/*
Fprintf与Fscanf
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include"Common.h"
//
//int main(void)
//{
//	/*
//	
//	Fprintf：
//		与printf的使用类似，但是参数1为文件指针
//		在运行的时候，会有数据类型的字节大小的转换，因此效率更低
//
//	Fscanf：
//		与scanf的使用类似，但是参数1为文件指针
//	
//	*/
//	FILE* pFile = fopen("D:\\Code\\基础学习\\C语言学习\\C语言学习\\Fopen\\2.16.AFprintf与Fscanf.txt", "r");
//	//fprintf(pFile, "%d,%s,%lf", 23, "ZhangHao", 173.0);
//
//	int a = 0;
//	char str[10] = { 0 };
//	double d = 0.0;
//	fscanf(pFile, "%d,%s,%lf", &a, str, &d);
//	//在读取的时候会发现，字符串会把所有的内容都读取到字符串中，因此一般将字符串放在最后，十分不方便，不建议使用
//
//	fclose(pFile);
//
//	system("pause");
//	return;
//}