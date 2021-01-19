/*
更多字符串操作函数
	字符串拼接函数：strcat
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main(void)
//{
//	/*
//	
//	1.strcat函数
//		strcat(str1,str2)，本函数存在两个参数，第一个参数为被拼接的字符串，第二个参数为要进行拼接的字符串，要求第一个字符串要足够大以满足拼接后的字符长度
//		其也存在_s版本，与其他的_s相同，要注意越界问题
//		strcar(str1,n1,str2,n2);
//	*/
//	char str1[20] = "abc";
//	strcat(str1, "defg");
//	printf("%s\n", str1);
//
//	/*
//	
//	2.数字字符串转换为整数：atoi函数
//		将数字字符串强转换为数字类型，其分为三种情况
//			第一种情况：全是数字的字符串，正常转换
//			第二种情况：数字+其他字符，在转换运行到非数字的字符时，转换结束
//			第三种情况：字符+数字，由于无法强转换字符，因此转换直接结束，结果为“0”
//	*/
//	char str2[20] = "123456789";
//	int a = atoi(str2);
//	printf("%d\n", a);
//
//	/*
//	
//	3.整数转换为字符串函数：itoa函数
//		_itoa(int value，char *str，int radix)，共有三个参数，第一个参数为要转换的数字，第二个参数为转换后存储的数组，第三个参数为转换为几进制（2-36进制）
//	*/
//	int a1 = 123;
//	char str3[20] = { 0 };
//	_itoa(a1, str3, 2);
//	printf("%s\n", str3);
//
//	/*
//	
//	4.格式化字符串函数：sprintf函数
//		sprintf(str,"%d",12);，想多个不同类型的数据转换为字符串格式，功能强大
//	*/
//	char str4[20] = { 0 };
//	sprintf(str4, "%d%cABC", 12, 'V');
//	printf("%s\n", str4);
//
//
//	system("pause");
//	return 0;
//}