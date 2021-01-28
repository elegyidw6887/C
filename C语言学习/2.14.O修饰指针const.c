/*
使用const修饰指针
*/

//#include"Common.h"
//
//int main(void)
//{
//	/*
//	
//	const修饰指针的四种形式：
//		>const int* p;
//		>int const* p;
//		>int* const p;
//		>const int* const p;
//
//		const int* p;与int const* p;
//			二者的效果相同，说明p所指向的空间的值*p不能进行修改，但是指针p可以指向其他的空间
//				>error C2166: 左值指定 const 对象
//
//		int* const p;
//			此种声明表示，*p指向的空间不能进行改变，也就是不能指向其他的空间，但是空间中的值是可以进行修改的
//				>error C2166: 左值指定 const 对象
//
//		const int* const p;
//			此种声明表示，*p与p均无法进行修改
//
//		常用作函数参数，用来返回函数返回值：
//			const int* fun(const int* p);
//			目的是为了保护数据
//
//		*/
//	int a = 23;
//	int b = 25;
//	const int* p = &a;
//
//	int* const p1 = &b;
//
//	const int* const p2 = NULL;
//
//
//	system("pause");
//	return 0;
//}