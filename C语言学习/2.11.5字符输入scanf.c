/*
字符输入scanf
*/

//#define _CRT_SECURE_NO_DEPRECATE
//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	/*
//	
//	1.scanf与scanf_s的区别：
//		在VS编译器编译环境下，scanf被认为是不安全的，因此微软推出了scanf_s来在VS中代替scanf以增加安全性
//		但是使用scanf_s代替scanf的情况下代码的移植会出现问题，如果要在vs中使用scanf，则要在代码最初始部位添加：
//			#define _CRT_SECURE_NO_DEPRECATE
//		来使得错误提示消失
//
//	2.scanf使用在中回车键（Enter）的意义：
//		在使用scanf的时候，不管有几个scanf，不管用户输入了多少个数值，只有当用户输入回车键的时候，scanf才会从输入缓冲区中读取数据，
//		一直读取到所有scanf需要的数据量
//		注：回车键，也就是转义字符中的\n，也是一个一个字符大小的字符，如果在输入的时候缓冲区数据不足，scanf也会将回车键本身拿取作为数据
//				这个特性，只有在输入字符的时候才会发生，写入数字的时候不会有影响
//
//	3.scanf中空格键的作用：
//		在scanf读取中，空格键的效果与回车键的效果是等同的，如果输入字符的时候也输入了空格，空格也会被scanf当作\n进行读取操作
//
//	4.scanf输入缓冲区字符问题解决方案：
//		在每次输入字符之前，将字符缓冲区进行一次清空，就可以在一定程度上避免一些意外情况发生
//		一共有三种方法：
//			①setbuf(stdin,NULL);
//			②fflush(stdin);//此种方法并不是C语言标准，部分编译器不支持
//			③while((C1 = getchar()) != '\n' && C1!= EOF);//其中C2为下一个scanf中的字符变量
//
//	*/
//
//	char C1;
//	char C2;
//	scanf("%c", &C1);
//	while((C2 = getchar()) != '\n' && C2!= EOF);//添加setbuf函数后，运行至此会清空缓冲区的存储内容，使用回车键来结束上一个scanf的读取
//	scanf("%c", &C2);
//	printf("%c,%c\n", C1, C2);
//
//
//	system("pause");
//	return 0;
//}