#define _CRT_SECURE_NO_WARNINGS 1

//EOF-end of file -文件结束标志---值为-1
#include<stdio.h>
#include<string.h>
void test()
{
	static int a = 1;//a是一个静态的局部变量
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
//	//typedef - 类型定义 - 类型重定义
//	//unsigned int num = 20;感觉比较长
//	//所以
//	typedef unsigned int u_int;
//	u_int num2 = 20;//之后再用u_int 和 unsigned int 没有任何区别
//	//张三- 小三 -张三的别名
//	return 0;
//}










//int main()
//{
//	//auto int a = 10;//局部变量 - 也叫自动变量 默认省略auto 局部变量前都有一个auto 因为局部变量都是自动变量 所以我们在这里不写
//	//register int a = 10;//把a定义成寄存器变量，只是建议作用
//	//int a = 10;
//	//a = -2;
//	//int 定义的变量是有符号的，
//	//signed int;通常省略signed
//	//unsigned int num = 1;定义无符号数，即使放一个负数进去，结果也为正数
//	//struct - 结构体关键字
//	//union - 联合体/共用体         
//	//关键字不能与变量重复
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
//	int a = 0;//4个字节 32个bit位
//	int b = ~a;//b是有符号的整型
//	//0000000000000000000000000000000
//	//1111111111111111111111111111111
//	//1111111111111111111111111111110
//	//1000000000000000000000000000001
//	//原码、反码、补码，
//	//负数在内存中存储的时候存储的是二进制的补码
//	printf("%d\n", b);//~是按（2进制）位取反 //使用的，打印的是这个数的原码
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用， 再++
//	int b = ++a;//前置++, 先++， 再使用
//	printf("a = %d b = %d\n", a, b);//11 11
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//强制类型转换
//	//printf("%d\n", a);//3
//	return 0;
//}

//int main()
//{	//真假 0假 !0真
//	//&&逻辑与
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("c = %d\n", c);//1
//有一个为假 就为假
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = a || b;
//	printf("c = %d\n", c);//有一个为真就为真
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









