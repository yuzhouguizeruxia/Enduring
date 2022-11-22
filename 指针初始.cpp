//#include<stdio.h>
//int main() {
//	int a = 10; //4个字节
//	//&a //取地址
//	int* p = &a;
//	printf("%p\n", &a); //%p取地址
//	printf("%p\n", p);  
//	//0000005A570FF6A4
//    //0000005A570FF6A4 输出相同
//
//	//000000579A30F694 十六位
//
//	//有一种变量是用来存放地址的-指针变量
//	//printf("%p\n", &a);
//	//*p; //解引用操作符
//
//	int num = 10;
//	int *p1; //p为一个整形指针变量
//	p1 = &num;
//
//	int num1 = 10;
//	int *p2 = &num1;
//	*p2 = 20;
//
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';//修改
//	printf("%c\n", ch );
//	return 0;
//}