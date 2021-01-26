/*
局部变量的认识
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	/*
//	
//	存储类说明符：
//		自动变量（大名）
//			局部变量/栈区变量
//				基本：
//					定义在｛｝内，也就是代码段中，比如函数内，包括主函数和自建函数
//					！注：在结构体花括号内的变量并不是局部变量
//					例：int a;		int a[4];	int* p;（malloc的空间不是变量，其中指针变量本身是栈区变量，但是所指向的是堆区空间）
//				特性：
//					生命周期：所在的花括号，当花括号的代码运行结束，该变量自动被释放
//					作用域：所在的花括号（所在的层次的花括号，如果有下级花括号，也同样适用），花括号以外此变量就失去了意义
//					因此被称为局部变量
//				注意：
//					{
//						int a = 23;
//					}
//					if (a = 23)
//					{
//						printf("%d\n", a);
//					}//会报错
//					
//
//		静态变量
//
//		寄存器变量
//
//		typedef
//
//	
//	*/
//	
//	{
//		int a = 23;
//		if (a = 23)
//		{
//			printf("%d\n", a);
//		}
//
//	}
//	
//	system("pause");
//	return 0;
//}