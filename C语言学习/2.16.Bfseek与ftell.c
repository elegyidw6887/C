/*
fseek��ftell
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include"Common.h"
//
//int main(void)
//{
//	/*
//	
//	fseek��
//		���ܣ�
//			�����ļ�ָ���λ��
//		�ṹ��
//			int fseek(
//				File *stream,
//				//����1���ļ�ָ��
//				long offset,
//				//����2�������ļ�ָ���λ��
//				int origin
//				//����3������λ��
//			);
//		���ã�
//			fseek(pFile , 0L , SEEK_SET);�����ļ�ָ��ָ��ͷ
//			fseek(pFile , 10L , SEEK_SET);�����ļ�ָ��ָ���10���ֽ�
//			fseek(pFile , 10L , SEEK_CUR);�����ļ�ָ��ָ��ǰλ���Ҳ��10�ֽں�
//			fseek(pFile , 0L , SEEK_END);�����ļ�ָ��ָ���β
//			fseek(pFile , -10L , SEEK_END);�����ļ�ָ��ָ���β�����10���ֽ�
//
//	ftell��
//		���ܣ�
//			�����ļ�ָ�뵱ǰ��λ��
//		�ṹ��
//			long ftell(
//				FILE*stream
//			);
//			//����1���ļ�ָ��
//
//	fseek��ftell������
//		ʹ��fseekָ��һ���ļ��Ľ�β����ʹ��ftell���ؽ�β��λ�ã��������������ķ��������ĵ����ֽ���
//
//	fclose��
//		�ļ��رգ����µ��ļ��У����ڴ��еĶ�Ӧ�ռ��ͷ�
//
//	
//	*/
//	FILE* pFile = fopen("D:\\Code\\����ѧϰ\\C����ѧϰ\\C����ѧϰ\\Fopen\\2.16.Bfseek��ftell.txt", "r");
//
//	char str[20] = { 0 };
//	fread(str, 1, 10, pFile);
//	printf(str);
//	printf("\n");
//
//	fseek(pFile, 3L, SEEK_CUR);
//	fread(str, 1, 5, pFile);
//	printf(str);
//	printf("\n");
//
//	int a = 0;
//	a = ftell(pFile);
//	printf("%d\n", a);
//
//	fseek(pFile, 0L, SEEK_END);
//	a = ftell(pFile);
//	printf("%d\n", a);
//
//	fclose(pFile);
//
//	system("pause");
//	return 0;
//}