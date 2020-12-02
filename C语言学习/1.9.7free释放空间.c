/*
free函数
*/

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main(void)
//{
//	/*
//	
//	1.free函数原型：
//		void free(void *memblock);
//
//	2.释放内存：
//		在我们不使用malloc申请的空间时，使用free函数来处理头字节，就可以释放空间
//
//	3.返回值：
//		void表示free函数没有返回值
//
//	4.参数：
//		要释放空间的指针
//
//	5.free函数的注意点：
//		在对空间进行free之后，这个空间就无法再次被使用
//	*/
//
//	int* p = (int*)malloc(4);
//	*p = 12;
//	printf("%d,%p\n", *p, p);
//
//	free(p);
//	p = NULL;
//	printf("%d,%p\n", *p, p);
//	/*
//	
//	在释放空间之后，指针本身的地址并没有变化，但是存储的数值被系统进行了初始化，一般建议在释放完之后立刻赋值为空
//	
//	 并且在一个指针使用之前，使用条件判断是否为空
//	*/
//
//
//	system("pause");
//	return 0;
//}