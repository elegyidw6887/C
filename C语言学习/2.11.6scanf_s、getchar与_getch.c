/*
scanf_s getchar _getch
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	/*
	
	1.scanf_s������
		��΢���vsΪ�˷�ֹ�ڴ��������Ƶĸ��Ӱ�ȫ��scanf�������볣���scanf������������ʹ��Ҳ������ͬ
		��������ֵ���棬scanf��s�汾�������𣬵������ַ����棬������ʾ
		���������ݼ�����ԭ�Ͳ��֣�
	*/

	char c1;
	int a1;
	scanf_s("%c%d", &c1, 1, &a1);//��&c���滹��Ҫ��һ��1���涨&c�Ĵ�СΪ1
	printf("a1 = %d\nc1 = %c\n", a1, c1);
	while ((c1 = getchar()) != '\n' && c1 != EOF);//��ջ�����

	/*
	
	2.getchar������
		��scanf�������ƣ�����һ��ֻ�ܶ�ȡһ���ַ�
	*/

	c1 = getchar();
	printf("c1 = %c\n", c1);


	system("pause");
	return 0;
}