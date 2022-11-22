// #pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>

int main()
{

    return 0;
}

//int main()
//{   //打印闰年
//    int year = 0;
//    int count = 0;
//    for (year = 1000; year <= 2000; year++)
//    {
//        //判断year是否为闰年
//        //1.能被4整除并且不能被100整除是闰年
//        //2.能被400整除是闰年
//        //两者满足之一或之二都算是闰年
//       /* if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//        {
//            printf("%5d", year);  //写法一
//        }*/ 
//          //写法二
//        if (year % 4 == 0 && year % 100 != 0) //普通闰年
//        {
//            printf("%5d", year);
//            count++;
//        }
//        else if(year % 400 == 0)  //世纪闰年
//        {
//            printf("%5d", year);
//            count++;
//        }
//    }
//    printf("\ncount = %d", count);
//    return 0;
//}

//int main()
//{
//    int m = 24, n = 18;
//    printf("请输入m和n的值：");
//    scanf("%d %d", &m, &n);
//    //辗转相除法
//    int r = 0;
//    printf("%d和%d的最大公约数为:", m, n);
//    while (r = m % n) //更进一步
//    {
//       // r = m % n;
//        m = n;        
//        n = r;
//    }
//    printf("%d", n);
//}

//int main()
//{   //打印3的倍数
//    int i = 0;
//    for (i = 0; i <= 100; i++)
//    {
//        if (i % 3 == 0)
//        {
//            printf("%3d", i);
//        }
//    }
//    return 0;
//}

//switch(c)  中的c不可以为float类型  ，c为整型，而int，long，char可以
                             //char因为其字符所对应的ASCLL码值是整型

//int main()
//{   //算法实现 a放最大，b中次之，c最小
//	int a=0, b=0, c=0;
//	int temp;
//	scanf("%d %d %d", &a, &b, &c); //scanf()中记得在输入是输入相应的符号，
//	                    //本代码中字符为空格
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("a = %d, b = %d, c = %d", a, b, c);
//	//system("pause");
//	return 0;
//}

//int main()
//{
//	//int password[20] = "123456";
//	
//	/*for (i = 0; i <= strlen(password); i++)
//	{
//		if()
//	}*/
//    char password[20] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 3; )
//	{
//		printf("请输入密码：\n");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0) //
//		{
//			printf("输入正确！");
//			break;
//		}
//		else
//		{
//			printf("密码错误！");
//			i++;
//		}
//	}
//	//printf("%d", i);  //3 直接打印出的为3，一判断不成立就直接跳出来了
//	if (i == 3)
//	{
//		printf("请联系18174452776解开");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to bit !!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2; //这里减2是因为
//                                    ！！！\0   有个\0也占一个字符
//	int right = strlen(arr1) - 1;  //所以可以采用这个简洁一点的方法
//	while (left < right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right]; //这两行用来将arr1中的字符替换到arr2中去
//		printf("%s\n", arr2);
//		休息一秒
//		Sleep(1000);    //1000毫秒 = 1秒；
//		system("cls");  // 执行系统命令的一个函数-cls-  清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{   //折半查找法，  二分查找法
//	int arr[] = { 1, 2, 3, 4, 5, 6, 8, 9, 10 };
//	int k = 17;
//	int k;
//	int sz = sizeof(arr) / sizeof(arr[0]);  //计算元素个数
//	int left = 0;
//	int right = sz - 1;
//	int mid;
//	printf("请输入你要查找的值k:\n");
//	scanf("%d", &k);  //取地址符 &  要记得，多打打这个代码
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (right < left)
//	{
//		printf("找不到！");  //勿忘记分号
//	}
//	return 0;
//}

//int main()
//{
//	int sum = 0;
//	int i = 1;
//	int j = 1;
//	int p = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		p = 1; //再次进去时p要设置初值
//		for (j = 1; j <= i; j++)
//		{
//			p *= j;
//		}
//		sum += p;
//	}
//	printf("1!+2!+3!+...+10! = %d", sum);
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int i, m = 1;
//	printf("请输入n的值：\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		m = m * i;
//	}
//	printf("n! = %d", m);  //记得用一个m来存，n！不等于n
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;//1 2 3 4 
//		    continue; //1 2 3 4 死循环了
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10); //分号勿忘
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;      //若j为非0，就会变成一个死循环了
//	for (i = 0, j = 0; j = 0; i++, j++) //判断  赋值语句 j=0 0是假，所以循环一次（判断了一次就出来了）
//		printf("shi");   
//		j++;
//	return 0;
//}

//int main() {
//	int x;
//	int y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++) {
//		printf("%d %d\n", x, y);
//		printf("hehe\n");
//	}
//	return 0;
//}


//2.建议for语句的循环控制变量的取值采取“前闭后开区间”写法
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i;
//	for (i = 0; i < 10; i++) {//“前闭后开区间”写法
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//1.不可在for循环内修改循环变量，防止for循环失去控制
//int main() 
//{   
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{                        
//		if (i = 5)          
//			printf("hhh\n"); 
//		printf("eeeee\n");
//	}
//	return 0;
//}

//for循环
//int main()
//{
//	int i = 0;
//	//   初始化  判断     调整
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;//1234
//		    continue;//1234678910  不会出现死循环
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;   //初始化
//	while (i <= 10)//判断
//	{
//		if (i == 5)
//			continue;//出现死循环
//		printf("%d ", i);
//		i++;  //调整
//	}
//}



//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF)// 对于 EOF 要按ctrl+z 退出
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:");
//	scanf("%s", password);
//	//
//	//
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认Y/N");
//	ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("放弃确认");
//	}
//	return 0;
//}
//int main() {
//	/*int ch = getchar();
//	putchar(ch);
//	printf("%c", ch);*/         
//	int ch = 0;               //EOF 右键点他，选转到定义，可查看
//	while ((ch = getchar()) != EOF)  //注意优先级，不要漏了括号
//	{             //EOF -- end of file 文件结束标志   实为 （-1）
//		putchar(ch);   //ctrl+C  停止  ctrl+z终止程序
//	}
//	return 0;
//}
//int main() {
//	int i = 1;
//	while (i<100)//调试只需一直按F10就行了，这个已用时间可看代码效率
//	{
//		i++；
//		if (i == 5)
//			/*break;*///永久终止循环
//			continue;  //终止循环中本次循环，跳转到下次循环
//		printf("%d ", i);
//		//i++;
//	}
//	return 0;
//}
//int main() {
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1: m++;
//	case 2: n++;  //没有break就不会停止，就会一直走下去
//	case 3: 
//		switch (n)
//		{  //switch允许嵌套使用
//		case 1:n++;
//		case 2:m++; n++; break;
//		}
//	case 4: m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d, n=%d", m, n);
//	return 0;
//}