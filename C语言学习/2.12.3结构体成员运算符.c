/*
�ṹ���Ա��������Ա����
*/

//#include<stdio.h>
//#include<stdlib.h>
//
//struct StuInfo
//{
//	char Name[10];
//	int Age;
//	double High;
//	char StuNum[20];
//};
//
//int main(void)
//{
//	/*
//	
//	���ʳ�Ա��
//
//		1.ʵ������
//			�пռ�ľ���ʵ����������struct StuInfo Stu1
//			�ڷ��ʳ�Ա��ʱ��ʹ�����¸�ʽ
//			Stu1.Age;
//			�������� + . + ��Ա
//			(&Stu1)->Age;ͬ��Ҳ�ǿ��Ե�
//
//	*/
//	struct StuInfo Stu1 = { "ZHANGHAO",23,173.0,"MZ120201477" };
//	Stu1.Age;
//	printf("%s,%d,%f,%s\n", Stu1.Name, Stu1.Age, Stu1.High, Stu1.StuNum);
//	printf("\n");
//
//	/*
//	
//		2.ָ�����
//			ָ�����ָ�����ͣ���struct StuInfo* p1 = &Stu1;
//			������ָ�����ͣ�����ָ��ռ䣬Ҫô��ȡַ�����&������malloc�ռ�
//			���ʳ�Ա��ʱ��ʹ�����¸�ʽ
//			p1->Age;
//			�������� + -> + ��Ա
//			(*p1).Ageͬ��Ҳ�ǿ��Ե�
//
//	*/
//
//	struct StuInfo* p1 = &Stu1;
//	p1->Age;
//	printf("%s,%d,%f,%s\n", p1->Name, p1->Age, p1->High, p1->StuNum);
//	printf("\n");
//
//
//
//	system("pause");
//	return 0;
//}