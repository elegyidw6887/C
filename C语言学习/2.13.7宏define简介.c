/*
宏（define）的简介
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//#define ONE 1
//
//int main(void)
//{
//	/*
//	
//	宏 > define
//		作用：
//			enum（枚举）是给整数重命名，typedef是给数据类型重命名，而define是可以给一切“重命名”
//			本质上位单纯的替换
//
//		写法：
//			#define（预处理指令）
//
//		常量宏：
//			#define ONE 1
//			>define为宏的前缀
//			>ONE为宏的名字
//			>1为宏的本体
//
//		宏的本质操作：
//			#define ONE 1
//			第二部分为重命名后的名称，第三部分，也就是被重命名部分，不管书写任何内容，都被视作一个整体进行替换，即便是运算式，也是直接对运算式进行
//			重命名，而不会进行任何多余的操作，而且也不会进行任何语法上的检测
//			并且即便是一个define中添加了另一个define定义的内容，二者的定义顺序也不会有任何影响
//
//	*/
//	printf("%d\n", ONE);
//
//
//	system("pause");
//	return 0;
//}