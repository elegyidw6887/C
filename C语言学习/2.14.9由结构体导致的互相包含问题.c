/*
由结构体导致的互相包含问题
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	/*
	
	在头文件相互包含中的结构体问题：
			1>D:\Code\基础学习\C语言学习\C语言学习\2.14.9结构体重复1p9.h(10,17): error C2079: “m3”使用未定义的 struct“Repeat2”
			1>D:\Code\基础学习\C语言学习\C语言学习\2.14.9结构体重复2p9.h(10,17): error C2079: “m4”使用未定义的 struct“Repeat2”
		当我们用互相包含的结构体中再使用另一个结构体来申请变量，此时就会出现这种问题
		其具体原因不是相互包含的原因，而是结构体特性的问题
	
	*/


	system("pause");
	return 0;
}