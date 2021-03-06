/*
结构体大小计算规则
*/

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//#pragma pack(4)
//
//struct Stu1
//{
//	char c;
//	int i;
//	double d;
//	short s;
//	//普通相加共15字节
//};
//
//struct Stu2
//{
//	char c;
//	short s;
//	int i;
//	double d;
//};
//
//int main(void)
//{
//	/*
//	
//	结构体大小的计算规则：
//		1.sizeof()来求解大小
//			注：并不是简单的把所有成员之和相加，涉及到内存对齐相关内容
//	
//		2.计算规则
//			以最大类型为字节对齐宽度
//			依次填补各个成员字节
//			结尾补齐
//
//		3.手动设置对齐
//			#pragma pack()
//			可以手动的让程序按照指定的字节数进行对齐
//			但是不会大于结构体内最大的变量的字节数（比如包含的最大字节数变量double是8，这个结构体最大就是8字节对齐）
//
//	*/
//	
//	printf("%u\n", sizeof(struct Stu1));//计算之后实际占用的字节为24字节
//	/*
//	
//	分析：
//		结构体中存在的最大的类型为double，占用8字节，因此8字节为字节对齐的宽度
//		char c占用1个，int i占用4个，二者可以存储在同一个对齐的8字节中（C 0 0 0 I I I I）
//		double d单独占用8个字节（D D D D D D D D）
//		short s占用2个，但是前方已经存在两个被占用的8字节空间了，s要存储在第三个对齐的8字节，最后在产生结尾补齐（S S 0 0 0 0 0 0）
//		因此共占用24字节
//
//	重新设置对齐后的结果：
//		20字节
//
//	*/
//	printf("%u\n", sizeof(struct Stu2));
//	/*
//	
//	分析：
//		在对结构体内变量的顺序进行了更改之后，内存占用从24字节变为了16字节，占用空间变小了
//		因此我们在书写结构体变量的时候，尽量按照变量本身占用的内存大小的从小到大的顺序来进行书写，有利于空间的节约
//		（C 0 S S I I I I）
//		（D D D D D D D D）
//
//	重新设置对齐后的结果：
//		16字节
//
//	*/
//
//
//
//	system("pause");
//	return 0;
//}