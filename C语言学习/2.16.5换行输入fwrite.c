/*
fwrite�Ļ�������
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
//	Fwrite���뻻�У�
//		�ڶ��fwrite�����ֱ����fwriteд��\n�ַ���ʵ�ֻ���
//
//	���������뻻�У�
//		�ı�ģʽʹ�á�\n����ʵ�ֻ��У����ڶ�����ģʽ�У�ʹ�á�\r\n����ʵ�ֻ���
//	
//	*/
//	FILE* pFile = fopen("D:\\Code\\����ѧϰ\\C����ѧϰ\\C����ѧϰ\\Fopen\\2.16.5Wrap.txt", "a");
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