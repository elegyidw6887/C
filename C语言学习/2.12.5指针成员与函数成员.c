/*
ָ���Ա�뺯����Ա
*/

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//void Fun(void)
//{
//
//	printf("Im a Function!\n");
//}
//
//struct Pointer
//{
//	int* p1;
//};
//
//struct Fun
//{
//	void(*p2)(void);//����ָ���������
//};
//
//int main(void)
//{
//	/*
//	
//	ָ���Ա�뺯����Ա
//
//		1.ָ���Ա
//			��ָ����������ṹ��ĳ�Ա�������ʹ����ָ��ĸ���ʹ����ͬ��������Ҫ��ӽṹ����صĲ���ע���
//
//	*/
//	int a[5] = { 1,2,3,4,5 };
//	struct Pointer st1 = { NULL };//ջ���ռ�
//	st1.p1 = a;
//	printf("%d,%d\n", st1.p1[0], st1.p1[4]);
//
//	struct Pointer st2 = { (int*)malloc(20) };//�����ռ�
//	st2.p1[0] = 0;
//	printf("%d\n", st2.p1[0]);
//	free(st2.p1);
//
//	/*
//	
//		2.������Ա
//			��������Ϊ�ṹ��ĳ�Ա�����Ǻ�������ֱ����Ϊ�ṹ��ĳ�Ա��Ҳ���ǲ���ֱ���ڽṹ������д�����ṹ��C++����
//			��Ҫʹ�ú���ָ����ָ���Ӧ�ĺ�������ɽ�������Ϊ�ṹ���Ա��Ŀ��
//
//	*/
//	struct Fun st3 = { &Fun };
//	(st3.p2)();
//
//	system("pause");
//	return 0;
//}