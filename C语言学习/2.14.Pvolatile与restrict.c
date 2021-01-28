/*
volatile与restrict
*/

//#include"Common.h"
//
//int main(void)
//{
//	/*
//	
//	volatile：
//		如果一个变量在程序中使用频率很高，并且变量的值没有发生改变，那么系统就会将这个变量存放到寄存器或者高速缓存中，以增加读取效率
//		如果增加volatile前缀，系统就不会把这个变量放入寄存器或者高速缓存中
//	
//	restrict：
//		可优化的操作
//		只能用于指针，表示该指针是访问对应空间的【唯一】且【初始】的方式
//
//	*/
//	volatile int a = 25;
//
//
//	system("pause");
//	return 0;
//}