/*
 字符串操作其他库函数
strlen与strcmp
*/

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main(void)
//{
//	/*
//	
//	1.strlen函数：
//		用于求字符串长度的函数
//	*/
//	char* p1 = "lkjhgfdsa";
//	int i = 0;
//	i = strlen(p1);//返回值的本质为size_t类型，也就是unsigned int类型，而且在求值的时候不计算\0
//	printf("%u\n", i);
//
//	/*
//	
//	2.strcmp函数：
//		函数用于比较两个字符串的大小
//		字符串大小比较：从第一个字符开始进行比较，直到比较到某一个大小不相同的字符，此时大的字符就被判定为大
//	*/
//	int n = 0;
//	n = strcmp("abcd", "abef");
//	printf("%d\n", n);//比较结果分为大于0，等于0与小于0三个，因此可以用来做比较条件，输出的结果为字符串之间相差的差值
//
//	/*
//	
//	3.strncmp函数：
//		从“n”可以看出，这个函数是比较字符串的前n个数字，
//	*/
//	int m = 0;
//	m = strncmp("abcd", "abcf", 3);//判定前3个字符，结果为0
//	printf("%d\n", m);
//
//
//	system("pause");
//	return 0;
//}