/*
内存分区
*/

//#include"Common.h"
//
//const int n = 23;
//
//int main(void)
//{
//	/*
//	
//	内存分区：
//		栈区：
//			属于局部变量
//			默认大小是1MB，自动申请，自动释放，局部作用域的特点
//
//		堆区：
//			malloc申请的空间
//			理论上是物理内存的大小，是由程序员申请，程序猿释放，不释放的话也是与程序共存亡
//
//		静态全局区：
//			全局变量，static变量
//			会被自动初始化为0，声明周期与程序共存亡，作用域是当前的文件夹或者代码块
//
//		字符常量区：
//			12，'c'，"qwe"，12.3
//			该区的特点是只读，空间也是由系统申请与释放的
//			生命周期：字符串常量，从定义位置开始，与程序共存亡
//								数据常量，属于立即数存储，一般不占用额外的存储空间，拿来主义
//
//			！全局const变量存储在常量区，局部const存储在栈区 ！
//				>引发了异常: 写入访问权限冲突。
//					p1 是 0x917B30。
//				由于字符常量区是只读，因此在强转换进行赋值的时候就会有权限错误
//
//		代码区：
//			用于存储代码，也是只读，由系统管理，与用户无关
//
//	
//	*/
//	const int m = 25;
//	int* p = (int*)&m;
//	*p = 22;
//
//	/*int* p1 = (int*)&n;
//	*p1 = 22;*/
//
//
//	system("pause");
//	return 0;
//}