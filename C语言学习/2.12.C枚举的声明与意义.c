/*
枚举的声明与意义
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//enum Color { enum_Red, enum_Yellow, enum_Blue, enum_Green };
//
//enum Color2 { enum_black = 1 , enum_white = 0 };
//
//int main(void)
//{
//	/*
//	
//	枚举：
//		概念
//			声明代表整数常量的名称（给整数起个名字，也就是给int类型的数值起个专有的名称）
//		作用：
//			提高代码的可读性
//			例：给1，2，3，4分别声明为东，南，西，北四个方向名称，直接使用名称来进行判定
//
//	枚举的声明：
//		enum Color{Red,Yellow,Blue,Green};
//		其在声明之后，代表的值默认是从0开始，依次为0，1，2，3，4......
//
//	枚举的初始化：
//		enum Color2 { enum_black = 1 , enum_white = 0 };
//
//	*/
//	printf("%d,%d,%d,%d\n", enum_Red, enum_Yellow, enum_Blue, enum_Green);
//
//	printf("%d,%d\n", enum_black, enum_white);
//
//
//	system("pause");
//	return 0;
//}