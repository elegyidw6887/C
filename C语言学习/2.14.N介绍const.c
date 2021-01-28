/*
const简介
*/

//#include"Common.h"
//
//int main(void)
//{
//	/*
//	
//	const：
//		>类型限定词
//		常量修饰符，在变量声明的之后使用const将其定义为常量，被修饰的变量就无法再二次修改了
//			>error C2166: 左值指定 const 对象
//			在给定义的常量赋值后会有如上提示
//			由于定义的变量无法再次修改，因此一定要进行初始化
//
//		作用：
//			用于保护一些重要的数据，增加程序的鲁棒性
//
//		本质：
//			我们在修饰了变量a之后，a就不能再修改了，但是如果获得了a的地址，还是可以通过地址对a进行修改
//
//		修饰数组：
//			与修饰变量相同
//	
//	*/
//	const int a = 25;
//	printf("%d\n", a);
//
//	int* p = (int*)&a;
//	//在C语言中被允许，但是在C++中会报错，通过强转来完成赋值，但是后续还是不能直接进行赋值修改
//	*p = 23;
//	printf("%d\n", a);
//
//	system("pause");
//	return 0;
//}