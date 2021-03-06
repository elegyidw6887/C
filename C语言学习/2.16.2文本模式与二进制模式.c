/*
文件读取的文本模式与二进制模式
*/
//#define _CRT_SECURE_NO_WARNINGS
//
//#include"Common.h"
//
//int main(void)
//{
//	/*
//	
//	文本模式：
//		"r"：
//			r，read，只读模式，通过此方法打开文件，只能读取，不能修改
//			使用此种方法打开文件，文件必须存在，不存在fopen就执行失效了
//			"rt"，text，文本格式，下同
//
//		"r"：
//			w，write，可读可写，【擦除写】，比如文件原来写有内容，w打开就会把文件擦除，重新按照咱们的意愿写入数据
//			注意：当文件不存在的时候，会创建文件
//
//		"a"：
//			a，可读可写，【接着写】，比如源文件内容正常，写入新的内容，会在原有的尾巴上接着写
//			注意：当文件不存在的时候，会创建文件
//
//		"r+"：
//			r+，可读可写，通过此方式打开文件，能读能写
//			注意：当文件不存在的时候，fopen会打开失败
//
//		"w+"：
//			w+，与w一样
//
//		"a+"：
//			a+，与a一样
//
//	二进制模式：
//		"rb"
//		"wb"
//		"ab"
//		"r+b"，"rb+"
//		"w+b"，"wb+"
//		"a+b"，"ab+"
//		与文本模式完全相同，b是bit的缩写，效果相同
//	
//	*/
//	FILE* pFile = fopen("D:\\Code\\基础学习\\C语言学习\\C语言学习\\Fopen\\2.16.2Wtest.txt", "w");
//
//
//	system("pause");
//	return 0;
//}