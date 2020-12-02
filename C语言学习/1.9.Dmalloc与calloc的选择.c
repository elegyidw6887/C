/*
malloc与calloc的选择
*/

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<malloc.h>
//
//int main(void)
//{
//	/*
//	
//	1.使用场景：
//		calloc在申请数组的情况下好用
//		在其他的数据结构中，如链表、树、图、一次申请sizeof(节点)等情况下，malloc要更合适
//
//	2.初始化问题：
//		calloc在申请之后会自动进行清零初始化
//		而malloc并不会清零初始化
//
//	3.效率问题：
//		calloc在申请的同时会进行初始化，因此在大量申请的情况下，效率会比malloc要低，但是效率的差距微乎其微，并不是主要的考虑目标
//
//	*/
//
//
//	system("pause");
//	return 0;
//}