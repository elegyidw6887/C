/*
scanf_s getchar _getch
*/

//#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h>
//
//int main(void)
//{
//	/*
//	
//	1.scanf_s()������
//		��΢���vsΪ�˷�ֹ�ڴ��������Ƶĸ��Ӱ�ȫ��scanf�������볣���scanf������������ʹ��Ҳ������ͬ
//		��������ֵ���棬scanf��s�汾�������𣬵������ַ����棬������ʾ
//		���������ݼ�����ԭ�Ͳ��֣�
//	*/
//
//	char c1;
//	int a1;
//	scanf_s("%c%d", &c1, 1, &a1);//��&c���滹��Ҫ��һ��1���涨&c�Ĵ�СΪ1
//	printf("a1 = %d\nc1 = %c\n", a1, c1);
//	//while ((c1 = getchar()) != '\n' && c1 != EOF);//��ջ�����
//
//	while (1)
//	{
//		char c0;
//		c0 = getchar();
//		if ('\n' == c0 || EOF == c0)
//		{
//			break;
//		}
//	}//while��������մ��������д�������е�c0������whileִ�н���֮����Զ��ͷ��ڴ棬����Ĵ�����Ҫ�ٴ���ջ�����ʱ��Ҫ���¶���c0
//
//	/*
//	
//	2.getchar()������
//		��scanf�������ƣ�����һ��ֻ�ܶ�ȡһ���ַ�
//	*/
//
//	c1 = getchar();
//	printf("c1 = %c\n", c1);
//	while (1)
//	{
//		char c0;
//		c0 = getchar();
//		if ('\n' == c0 || EOF == c0)
//		{
//			break;
//		}
//	}
//
//	/*
//	
//	3._getch()������
//		��getchar���ƣ�����_getch��������Ҫ�س����������ȡ
//		��Ҫ����µ�ͷ�ļ���conio.h
//	*/
//
//	c1 = _getch();
//	printf("c1 = %c\n", c1);
//
//
//	system("pause");
//	return 0;
//}