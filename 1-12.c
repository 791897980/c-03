#define _CRT_SECURE_NO_WARNINGS 1

//#define����ı�ʶ������
//#define MAX 100
//#define�����Զ����--���Ǵ�������
#include<stdio.h>
#include<string.h>

int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'a';
	printf("%c\n", ch);
	printf("%d\n", sizeof(int*));
	return 0;
}





//int main()
//{
//	int a = 10;//�ĸ��ֽ� �����õ������ַ �뿴һ�� ������ȡ��ַ����
//	//&a;//ȡ��ַ
//	int* p = &a;
//	//��һ�ֱ�����������ŵ�ַ��--ָ����� ����������int*
//
//	printf("%p\n", p);
//	printf("%p\n", &a);
//	*p = 20;//* - ��Ӧ�ò�����  ��p���н�Ӧ�ò������ҵ�����ָ��a
//	printf("a = %d\n", a);
//	return 0;
//}














//������ʵ��
//int  MAX(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)
//
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//�����ķ�ʽ
//	int max = MAX(a,b);
//	printf("max = %d\n", max);
//	//��ķ�ʽ
//	//max = MAX(a, b);
//	//max = (a>b?a:b);
//	/*printf("max = %d\n", max);*/
//	return 0;
//}












//EOF-end of file -�ļ�������־---ֵΪ-1








//void test()
//{
//	1��static int a = 1;//a��һ����̬�ľֲ����� static���ξֲ�����ʱ �ֲ����������������ӳ���--   
//	2��//static����ȫ�ֱ���
//static ����ȫ�ֱ����Ǹı��˱�����������
//��̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ���û�а취ʹ����
//static���κ���

//3��static���κ���Ҳ�Ǹı��˺�����������--����˵������׼ȷ��static�ı��˺�������������
//��ͨ�ĺ��������ⲿ�������ԣ���static���κ���ǵ��ⲿ��������-���ڲ���������

//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}



//int main()
//{
//	//extern ���������ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//
//}



//	a++;
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}