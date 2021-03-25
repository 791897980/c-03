#define _CRT_SECURE_NO_WARNINGS 1

//#define定义的标识符常量
//#define MAX 100
//#define还可以定义宏--宏是带参数的
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
//	int a = 10;//四个字节 怎样拿到这个地址 想看一看 所以用取地址符浩
//	//&a;//取地址
//	int* p = &a;
//	//有一种变量是用来存放地址的--指针变量 他的类型是int*
//
//	printf("%p\n", p);
//	printf("%p\n", &a);
//	*p = 20;//* - 解应用操作符  对p进行解应用操作，找到它所指向a
//	printf("a = %d\n", a);
//	return 0;
//}














//函数的实现
//int  MAX(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//函数的方式
//	int max = MAX(a,b);
//	printf("max = %d\n", max);
//	//宏的方式
//	//max = MAX(a, b);
//	//max = (a>b?a:b);
//	/*printf("max = %d\n", max);*/
//	return 0;
//}












//EOF-end of file -文件结束标志---值为-1








//void test()
//{
//	1、static int a = 1;//a是一个静态的局部变量 static修饰局部变量时 局部变量的生命周期延长了--   
//	2、//static修饰全局变量
//static 修饰全局变量是改变了变量的作用域
//静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就没有办法使用了
//static修饰函数

//3、static修饰函数也是改变了函数的作用域--这种说法不够准确：static改变了函数的链接属性
//普通的函数具有外部链接属性，被static修饰后就是的外部链接属性-》内部链接属性

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
//	//extern 用来声明外部符号的
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