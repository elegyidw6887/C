/*
fopen_s��errno
*/

//#include"Common.h"
//#include<errno.h>
//
//int main(void)
//{
//	/*
//	
//	fopen_s��
//		ʹ����fopen������ͬ������������_s�汾��fopen_s������һ��������ʹ������
//
//	errno��
//		�����룬���ڼ�¼������ֵĴ�����룬ͨ����������ֵ���������Ľ����<errno.h>ͷ�ļ��ж���
//		ֻ������ϵͳ���庯���Ĵ������¼
//		��������һ��int���͵ĺ�����ʹ�÷�������
//			>errno_t a;ֱ��ʹ��errno����������洢������
//			>int a = errno;ֱ��ʹ�����ַ�������errno�Զ����洢�����룬��Ҫ���ڳ��������֮��
//	
//	*/
//	FILE* pFlie = NULL;
//	fopen_s(&pFlie, "D:\\Code\\����ѧϰ\\C����ѧϰ\\C����ѧϰ\\Fopen\\2.16.3Fopen_s.txt", "w");
//	errno_t a = fopen_s(&pFlie, "D:\\Code\\����ѧϰ\\C����ѧϰ\\C����ѧϰ\\Fopen\\2.16.3Fopen_s.txt", "r");
//	int a = errno;
//
//
//	system("pause");
//	return 0;
//}