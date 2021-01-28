/*
寄存器变量register
*/

//#include"Common.h"
//
//int main(void)
//{
//	/*
//	
//	Register:
//		（此部分知识点在软件开发中很少用到，一般使用在嵌入式开发或者单片机的开发中）
//		在变量声明的时候，前方添加register前缀即可
//			>error C2103: 寄存器变量上的“&”
//			对于寄存器变量，无法对其取地址，会出现如上提示
//		同时不能修饰全局变量
//
//	CPU取数据处理：
//		CPU<——>寄存器<——>物理内存（寄存器与物理内存中还存在高速缓存）
//		寄存器：
//			寄存器与CPU速度相当，空间较小在kb级别
//			是在CPU上的空间，是CPU的一部分
//				>用于存储二进制数据
//
//		高速缓存（一级二级三级）：
//			高速缓存比寄存器要慢，但是空间可以达到MB级别
//				>用于存储寄存器中使用频率高的数据
//
//		物理内存：
//			内存比缓存要慢，但是内存可以达到GB级别
//				>在代码运行的时候，从硬盘加载到物理内存中
//
//		硬盘（固态与机械）：
//			硬盘的速度最慢，但是价格也是最便宜
//				>用于存储源代码等
//
//		其他外设：
//			其他的USB设备
//
//	*/
//	register int a = 25;
//
//
//	system("pause");
//	return 0;
//}