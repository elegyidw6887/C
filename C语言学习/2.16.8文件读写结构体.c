/*
�ļ���д�ṹ��
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
//	��д�ṹ�壺
//		ֻ��fwrite��fread����ʵ�������Ĺ��ܣ��������Ժ����޷�ʵ��
//	
//	*/
//	struct StuInfo Stu1 = { 114,"ZhangHao",23,173.0 };
//	FILE* pFile = fopen("D:\\Code\\����ѧϰ\\C����ѧϰ\\C����ѧϰ\\Fopen\\2.16.8Struct.txt", "r");
//
//	//fwrite(&Stu1, sizeof(Stu1), 1, pFile);
//	//�ļ��ڶ�ȡ��д���ʱ��Ҫʹ��"a"
//	struct StuInfo Stu0;
//	fread(&Stu0, sizeof(Stu0), 1, pFile);
//	//�ļ��ڶ�ȡ��ʱ��Ҫʹ��"r"
//	fclose(pFile);
//
//	system("pause");
//	return 0;
//}