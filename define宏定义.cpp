////#define定义常量和宏
//#include<stdio.h>
////#define MAX 100
////#define 可以定义宏-带参数
//
////函数的实现
//int Max(int x, int y) 
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义
//#define MAX(X, Y) (X>Y?X: Y)
//
//int main() {
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max= %d\n", max);
//	//宏的方式
//	max = MAX(a, b); //“max”: 重定义；多次初始化，不要int两次了
//	// max = (a>b?a: b);
//	printf("max = %d\n", max);
//	return 0;
//}
//每次进行下一个源程序的时候记得把先前的那个程序全部注释掉
//免得出现一个项目里出现了两个main（）函数的错误
