/*
��ͨ�ʽ�ĵݹ麯��������ѧӦ��Ϊ��
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//int FibonacciSeq(int a1);
//int Factorial(b1);
//
//int main(void)
//{
//	/*
//	
//	쳲��������о�����
//		1��1��2��3��5��8��13��21��34......
//		ǰ����Ϊ1���ӵ����ʼÿһ���Ϊǰ����ĺ�
//		f(n) = f(n-1) + f(n-2)
//
//	�׳˾�����
//		1*2*3*4*n*.......
//		��1��ʼһֱ�˵�Ŀ����ֵ
//		f(n) = n*f(n-1)
//	*/
//
//	int i = 1;
//	printf("������һ�����ڵ���1�����������Ӧ��쳲���������\n");
//	scanf_s("%d", &i);
//	printf("��Ӧ��쳲�������Ϊ%d\n", FibonacciSeq(i));
//
//
//	system("pause");
//	return 0;
//}
//
//int FibonacciSeq(int a1)
//{
//	//����쳲��������е�ǰ����Ϊ�̶���1�������Ҫ�����������a1=1��a1=2����������������ʹ��ͨ�ʽ
//	if (1 == a1)
//	{
//		return 1;
//	}
//	else if (2 == a1)
//	{
//		return 1;
//	}
//	else
//	{
//		return FibonacciSeq(a1 - 1) + FibonacciSeq(a1 - 2);//쳲���������ʽ
//	}
//
//}
//
///*
//��������չ����
//��FibonacciSeq(5)Ϊ��������չ������
//
//FibonacciSeq��5��= FibonacciSeq��4��+FibonacciSeq��3����
//
//	FibonacciSeq��4��= FibonacciSeq��3��+FibonacciSeq��2����
//
//		FibonacciSeq��3��= FibonacciSeq��2��+FibonacciSeq��1����
//
//			FibonacciSeq��2��= 1��
//
//			FibonacciSeq��1��= 1��
//
//��������FibonacciSeq��2����FibonacciSeq��1��Ҳ������С����ۼӣ���ʽ��Ϊһ�Ŷ�����
//
//*/
//
//int Factorial(int b1)
//{
//	//����һ�������н׳�
//	if (b1 == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return b1 * Factorial(b1 - 1);//�׳˹�ʽ
//	}
//
//}