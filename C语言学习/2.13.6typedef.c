/*
typedef
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//typedef int myint;
//typedef unsigned int unint;
//typedef int* pint;
//
//typedef struct Node
//{
//	int i;
//}_Node;//�ṹ����������ʹ���ø����
//
//typedef struct
//{
//	int i;
//}_Node2;//�������ƽṹ�����������ظ�ʹ�ã����������ڶ��һ�ٵĲ���
//
//void Fun(int a, double d)
//{
//	printf("Im a Void Funtion!");
//}
//typedef void(*pFun1)(int, double);//����ָ��������������ļ���˺���ָ���ʹ�ã�ͬʱҪע����������λ�ã���ԭ����дp��λ��
//
//int main(void)
//{
//	/*
//	
//	����������������typeof
//		�籾��ı���������һ�����Ը������������͵Ĺؼ��ʽ����������ĺ���
//			>typedef int myint;
//		��ִ���������֮��myint�ͺ�int��ȫһ���ˣ�����ʹ��myint������intʹ��
//		��Ҫ��Ŀ�Ļ������Ӵ���Ŀɶ���
//			>typedef unsigned int unint;
//		ͬʱ�����Է���һ�����������Ƶ���д
//
//		��д��λ�ÿ�����д�ڳ���������ǰ����Ҳ������д���������ڣ������Խ������ڣ��漰��ȫ�ֻ��߾ֲ������÷�Χ
//
//	*/
//
//	myint a = 23;
//	int b = 25;
//	unint c = 26;
//	printf("%d,%d,%u\n", a, b, c);
//
//	pint p = &a;
//	printf("%p\n", p);
//
//	_Node n = { 10 };
//
//	_Node2 m = { 10 };
//
//	system("pause");
//	return 0;
//}