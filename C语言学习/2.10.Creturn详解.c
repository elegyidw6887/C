/*
return���
*/

#include<stdio.h>
#include<stdlib.h>

int Fun(void)
{

	return 12;
	printf("Im a Function!\n");//���������return�󷽣���˴���䲢����ִ�� 
}

int Fun2(void)
{

	int a;
	a = 12;

	if (a >= 10 && a < 20)
	{
		return 1;
	}

	if (a >= 20 && a < 30)
	{
		return 2;
	}

	return 3;

}

int main(void)
{
	/*

	return ����;
		�����з���ֵ�ĺ�������ֹ���ں�����ִ�У������е�return�󣬺��������оͽ��������ۺ��Ƿ��д��룩��
		������ָ������ ��

		���Դ��ڶ��return������ִֻ�д����߼��ϵĵ�һ��

		returnҲ����ʹ�����޷���ֵ�ĺ���֮�У�ֱ��������ֹ����������

	*/

	Fun();

	int a = Fun2();
	printf("%d,%d\n", a, Fun2());


	system("pause");
	return 0;
}