/*
�ı�ģʽ�������ģʽ����
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include"Common.h"
//
//int main(void)
//{
//	/*
//	
//	ʹ��Fread����ȡ�н�β��
//		0x0A > ��Ϊ\n���ڶ�ȡ��ʱ�򣬶�����ģʽ��\r\nϵͳ���Զ���ת��Ϊ\n���ڶ�ȡ��ʱ����ת��Ϊ\r\n
//		��ʹ�õ�ʱ��������Linuxϵͳ�У��������ı�ģʽ���Ƕ�����ģʽ����β��Ϊ\n����˿��ǵ���ֲ�ԣ�����ʹ���ı�ģʽ
//
//	Feof������
//		����ļ������ĺ�������δ������δ��⵽��β��ʱ������0���ڽ���ʱ������1
//	
//	*/
//	FILE* pFile = fopen("D:\\Code\\����ѧϰ\\C����ѧϰ\\C����ѧϰ\\Fopen\\2.16.7Feof.txt", "r");
//	int a = 0;
//	char str[80] = { 0 };
//	while (!feof(pFile))
//	{
//		a = fread(str, sizeof(char), 2, pFile);
//		printf(str);
//		str[0] = 0;
//		str[1] = 0;
//	}
//
//
//	system("pause");
//	return 0;
//}