/*
union��Ա���ڴ�ģ�ͣ�union���ڴ��С
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//union Un1
//{
//	int i;
//	char c;
//	short s;
//};
//
//int main(void)
//{
//	/*
//	
//	union��Ա���ڴ�ģ�ͣ�
//		�򵥵���ֵ��ֵ���
//			����1�ֽڴ�С���Դ洢����ֵ�Ǵ�-128~127�����ֻҪ��С�����������Χ�ڵ���ֵ�Ϳ��������ı��洢�ڵ�һ���ֽ��ڣ��Ӷ����������һ�δ�ӡ�����
//			����ֵ����127֮�󣬱���128��c��ֵԽ���ˣ���127�����-128
//	*/
//	union Un1 un1 = { 23 };
//	printf("%d\n%d\n%hd\n", un1.i, un1.c, un1.s);//��һ�δ�ӡ
//
//	un1.i = 128;
//	printf("%d\n%d\n%hd\n", un1.i, un1.c, un1.s);
//
//	/*
//	
//	union�Ĵ�С
//		sizeof������
//	*/
//	printf("%d\n", sizeof(un1));
//
//
//	system("pause");
//	return 0;
//}