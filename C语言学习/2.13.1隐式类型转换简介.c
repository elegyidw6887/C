/*
隐式类型转换
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	/*
//	
//	类型转换：
//		在C语言中分为两类，一是隐式类型转换（系统自动执行的），二是显式类型转换（手动强制或者宏观上可以查看的代码）
//
//	隐式类型转换
//		第一：
//			当出现在表达式中，有符号与无符号的char与short会自动转换成int类型参与运算。
//			当short与int一样的时候（16位系统，2字节），unsigned short会被转为unsigned int
//			（在K&R标准中，也就是C语言最初的标准，float会被转换为double运算）
//
//		第二：
//			包含两种数据类型的任何运算中，两个值都被转换成两种类型中较高的类型（也就是内存较大的类型），然后再进行计算，例如：2+3.4，
//			2会被转换为double再计算，因为同类型数据才能直接运算
//			类型级别高到低的顺序：
//				long double>double>float>unsigned long long>long long>unsigned long >long>unsigned int>int
//			当long与int有同样的大小时，unsigned int>long
//			排名没有涉及到char与short是因为已经被转换为int或者unsigned int计算
//			混合运算转换过程，以3+4/5.0f+6-9.0为例
//				>先运算4/5.0f，4转换为float4.0f，结果为0.8f
//				>再运算3+0.8f，3转换为3.0f，结果为3.8f
//				>再运算3.8f+6，6转换为6.0f，结果为9.8f
//				>最后运算9.8f-9.0，9.8f转换为double9.8，结果为1.8，类型为double
//				注：并不是一开始全部转换为最高的类型在进行运算
//
//		第三：
//			在赋值语句中，会被转换成赋值运算符左侧的类型，可能升级，也可能降级
//				>int a = 12.3;double转化为int，降级
//				>double d = 12;int转换为double，升级
//
//		第四：
//			作为函数参数时，char和short会被自动升级为int，float会被转换为double，可以通过函数原型防止提升（不需要我们考虑）
//
//		注意：
//			下个课时讲解
//
//	*/
//
//	int a = 12.23;
//	double d = 12;
//	printf("%d,%f\n", a, d);
//	//会出现提醒，同时损失精度
//
//
//	system("pause");
//	return 0;
//}