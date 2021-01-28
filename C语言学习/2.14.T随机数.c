/*
随机数
*/

//#include"Common.h"
//#include<time.h>
//
//int main(void)
//{
//	/*/
//	
//	随机数：
//		应用：
//			贪吃蛇食物产生的位置、俄罗斯方块下一个方块的形状、棋牌游戏的发牌......
//			几乎是必用的功能，尤其是各种的游戏之中
//			（随机数产生算法比较复杂难以理解，目前以应用为主）
//		头文件：
//			<stdlib.h>
//		随机数种子：
//			>void srand(unsigned int seed)
//		利用时间产生随机数：
//			<time.h>
//			srand(time(NULL))
//			利用以上代码可以使用计算机的时候来产生随机数
//				>从“time_t”转换到“unsigned int”，可能丢失数据
//				在使用的时候会出现这样的提示，具体为从int64转为int类型，可以使用强转换来消除警告
//
//	
//	*/
//
//	//随机数种子，3为随机数基准数
//	srand(3);
//	//产生随机数
//	int a = rand();
//	printf("%d\n", a);
//	//生成10次随机数
//	int i = 0;
//	while (i < 10)
//	{
//		a = rand();
//		printf("%d\n", a);
//		i++;
//		/*
//		在重复生成的时候，rand函数会以上次产生的随机数为基准数再次进行随机
//		*/
//	}
//	//利用系统时间作为随机数种子
//	srand((unsigned int)time(NULL));
//	int b = rand();
//	printf("%d\n", b);
//
//
//	system("pause");
//	return 0;
//}