/*
malloc注意点
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//int main(void)
//{
//	/*
//	
//	1.千万不要越界
//			以整数型变量为例，如果申请了12字节的空间，只能存储三个int类型，不能继续储存第四个，否则就会出现越界情况
//
//	2.一个指针指向了一块堆空间，就千万不要再指向另一个
//
//
//	*/
//	 
//	/*
//	1.以下为两种内存越界的情况
//	*/
//	//int* p = (int*)malloc(3);
//	//*p = 12;
//
//	//free(p);
//	/*
//	* 内存大小越界
//		malloc申请了一个三个字节大的空间，之后对其赋值一个int类型的四字节整数，之后使用free()函数释放空间的时候，就会出现错误
//	*/
//
//	//int* p = (int*)malloc(4);
//	//*(p + 1) = 12;
//	/*
//	*操作内存越界
//		malloc的内存为p，但是对p+1进行赋值，由于c/c++不会检测此种越界情况，因此在程序执行过程中会出现崩溃现象
//	*/
//
//	/*
//	2.指针更换malloc空间，则会导致空间丢失
//	*/
//	int* p = (int*)malloc(4);
//	int* p = (int*)malloc(4);
//	//会导致第一次malloc的空间发生丢失，造成内存泄露（丢失的空间并不会释放，还是会继续被占用；如果内存泄露发生在循环之中，则会出现严重的后果）
//	int* p1 = p;
//	//在使用新的指针对空间进行记录之后，则不会出现内存泄露情况，并且可以正常使用与释放
//	free(p1);
//
//
//	system("pause");
//	return 0;
//}