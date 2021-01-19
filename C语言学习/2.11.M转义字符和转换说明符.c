/*
转义字符与转换说明符
*/

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main(void)
//{
//	/*
//	
//	转义字符：\
//	转换说明符：%
//
//	1.\r
//		将光标移动到本行起始位置继续运行，因此会覆盖掉一些内容
//	*/
//	printf("QWE\rRT");//R覆盖了Q，T覆盖了W，提示语覆盖了E
//	printf("\n");
//
//	/*
//	
//	2.\+" or ' or \
//		可以用来输出这些特殊的字符
//	*/
//	printf("\' \" \\ \n");
//
//	/*
//	
//	3.转义字符的长度
//		可以使用strlen来查看字符的长度，一般的转义字符均为1字节
//	*/
//	printf("%u\n", strlen("\n"));
//
//
//	system("pause");
//	return 0;
//}