/*
ʹ��const����ָ��
*/

//#include"Common.h"
//
//int main(void)
//{
//	/*
//	
//	const����ָ���������ʽ��
//		>const int* p;
//		>int const* p;
//		>int* const p;
//		>const int* const p;
//
//		const int* p;��int const* p;
//			���ߵ�Ч����ͬ��˵��p��ָ��Ŀռ��ֵ*p���ܽ����޸ģ�����ָ��p����ָ�������Ŀռ�
//				>error C2166: ��ֵָ�� const ����
//
//		int* const p;
//			����������ʾ��*pָ��Ŀռ䲻�ܽ��иı䣬Ҳ���ǲ���ָ�������Ŀռ䣬���ǿռ��е�ֵ�ǿ��Խ����޸ĵ�
//				>error C2166: ��ֵָ�� const ����
//
//		const int* const p;
//			����������ʾ��*p��p���޷������޸�
//
//		�����������������������غ�������ֵ��
//			const int* fun(const int* p);
//			Ŀ����Ϊ�˱�������
//
//		*/
//	int a = 23;
//	int b = 25;
//	const int* p = &a;
//
//	int* const p1 = &b;
//
//	const int* const p2 = NULL;
//
//
//	system("pause");
//	return 0;
//}