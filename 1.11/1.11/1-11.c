#define _CRT_SECURE_NO_WARNINGS 1

//EOF-end of file -�ļ�������־---ֵΪ-1
#include<stdio.h>
#include<string.h>
void test()
{
	static int a = 1;//a��һ����̬�ľֲ�����
	a++;
	printf("a = %d\n", a);
}

int main()
{
+	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}












//int main()
//{
//	//typedef - ���Ͷ��� - �����ض���
//	//unsigned int num = 20;�о��Ƚϳ�
//	//����
//	typedef unsigned int u_int;
//	u_int num2 = 20;//֮������u_int �� unsigned int û���κ�����
//	//����- С�� -�����ı���
//	return 0;
//}










//int main()
//{
//	//auto int a = 10;//�ֲ����� - Ҳ���Զ����� Ĭ��ʡ��auto �ֲ�����ǰ����һ��auto ��Ϊ�ֲ����������Զ����� �������������ﲻд
//	//register int a = 10;//��a����ɼĴ���������ֻ�ǽ�������
//	//int a = 10;
//	//a = -2;
//	//int ����ı������з��ŵģ�
//	//signed int;ͨ��ʡ��signed
//	//unsigned int num = 1;�����޷���������ʹ��һ��������ȥ�����ҲΪ����
//	//struct - �ṹ��ؼ���
//	//union - ������/������         
//	//�ؼ��ֲ���������ظ�
//	//int float;//error
//
//
//
//
//
//	return 0;
//}



























/*AX(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;

}

int main()
{
	int a = 0;
	int b = 0;
	int max = 0;
	scanf("%d%d", &a, &b);
	max = MAX(a, b);
	printf("max = %d\n", max);

	return 0;
*/

//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof (arr)/sizeof(arr[0]));
//	return 0;
//}

//int main()
//{
//	int a = 0;//4���ֽ� 32��bitλ
//	int b = ~a;//b���з��ŵ�����
//	//0000000000000000000000000000000
//	//1111111111111111111111111111111
//	//1111111111111111111111111111110
//	//1000000000000000000000000000001
//	//ԭ�롢���롢���룬
//	//�������ڴ��д洢��ʱ��洢���Ƕ����ƵĲ���
//	printf("%d\n", b);//~�ǰ���2���ƣ�λȡ�� //ʹ�õģ���ӡ�����������ԭ��
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã� ��++
//	int b = ++a;//ǰ��++, ��++�� ��ʹ��
//	printf("a = %d b = %d\n", a, b);//11 11
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//ǿ������ת��
//	//printf("%d\n", a);//3
//	return 0;
//}

//int main()
//{	//��� 0�� !0��
//	//&&�߼���
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("c = %d\n", c);//1
//��һ��Ϊ�� ��Ϊ��
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = a || b;
//	printf("c = %d\n", c);//��һ��Ϊ���Ϊ��
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	max = (a > b ? a : b);
//		printf("max = %d\n", max);
//
//	return 0;
//}









