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
//}_Node;//结构体重命名来使调用更简便
//
//typedef struct
//{
//	int i;
//}_Node2;//给无名称结构体重命名来重复使用，但是是属于多此一举的操作
//
//void Fun(int a, double d)
//{
//	printf("Im a Void Funtion!");
//}
//typedef void(*pFun1)(int, double);//函数指针重命名，极大的简便了函数指针的使用，同时要注意重命名的位置，是原本书写p的位置
//
//int main(void)
//{
//	/*
//	
//	类型重命名函数：typeof
//		如本身的表述，这是一个可以给各种数据类型的关键词进行重命名的函数
//			>typedef int myint;
//		在执行上述语句之后，myint就和int完全一样了，可以使用myint来代替int使用
//		主要的目的还是增加代码的可读性
//			>typedef unsigned int unint;
//		同时还可以方便一部分数据类似的书写
//
//		书写的位置可以书写在程序主函数前方，也可以书写在主函数内，或者自建函数内，涉及到全局或者局部的作用范围
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