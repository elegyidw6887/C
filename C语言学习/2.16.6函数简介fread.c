/*
Fread�������
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include"Common.h"
//
//int main(void)
//{
//	/*
//	
//	Fread��飺
//		Fread�ṹ��
//			size_t fwrite(
//				void *buffer,
//				//����1����const���͵ĵ�ַ�������Լ����ַ����飬�ļ�������������װ������
//				size_t size,
//				//����2����fwrite��ͬ
//				size_t count��
//				//����3����fwrite��ͬ��ע���ȡ���ֽ���ҪС�ڵ����ļ����ڵ��ֽ�����������ڻ�ʧ��
//				FILE *stream
//				//����4���ļ�ָ��
//			);
//			���˲���1֮�⣬��fwrite�Ĳ�����ͬ
//
//		����ֵ��
//			һ�³��������ֽ���������0
//			��ȡ��ǡ�����ļ��ֽ�����ͬ������1
//			��С���ļ��ֽ���ʱ���᷵��ʵ�ʶ�ȡ�����ֽ���
//
//	*/
//	FILE* pFile = fopen("D:\\Code\\����ѧϰ\\C����ѧϰ\\C����ѧϰ\\Fopen\\2.16.6Fread.txt", "r");
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
//	//ͨ����fread��Ϊwhileѭ�������������÷���ֵ������ѭ���������ȡ���
//	printf("\n");
//
//	fclose(pFile);
//
//	system("pause");
//	return 0;
//}