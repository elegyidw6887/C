/*
Fputs��Fgets
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include"Common.h"
//
//int main(void)
//{
//	/*
//	
//	Fputs��Fgets��
//		һ���Զ�дһ�е�����
//
//	Fputs��
//		�ṹ��
//			int fputs(const char* str , FILE* stream);
//			//����1Ϊchar���͵ĵ�ַ����˾���һ���ľ�����
//		����ֵ��
//			�ɹ�����0
//			ʧ�ܷ���EOF��-1��
//
//	Fgets��
//		�ṹ��
//			char fgets(char *str , int n , FILE*stream);
//			//����1����ȡ���������ݴ�������
//			//����2�����Ķ�ȡ������Ҫ��������1�ĳ���
//			
//	*/
//	FILE* pFile = fopen("D:\\Code\\����ѧϰ\\C����ѧϰ\\C����ѧϰ\\Fopen\\2.16.9Fputs��Fgets.txt", "r");
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