// #pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>

int main()
{

    return 0;
}

//int main()
//{   //��ӡ����
//    int year = 0;
//    int count = 0;
//    for (year = 1000; year <= 2000; year++)
//    {
//        //�ж�year�Ƿ�Ϊ����
//        //1.�ܱ�4�������Ҳ��ܱ�100����������
//        //2.�ܱ�400����������
//        //��������֮һ��֮������������
//       /* if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//        {
//            printf("%5d", year);  //д��һ
//        }*/ 
//          //д����
//        if (year % 4 == 0 && year % 100 != 0) //��ͨ����
//        {
//            printf("%5d", year);
//            count++;
//        }
//        else if(year % 400 == 0)  //��������
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
//    printf("������m��n��ֵ��");
//    scanf("%d %d", &m, &n);
//    //շת�����
//    int r = 0;
//    printf("%d��%d�����Լ��Ϊ:", m, n);
//    while (r = m % n) //����һ��
//    {
//       // r = m % n;
//        m = n;        
//        n = r;
//    }
//    printf("%d", n);
//}

//int main()
//{   //��ӡ3�ı���
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

//switch(c)  �е�c������Ϊfloat����  ��cΪ���ͣ���int��long��char����
                             //char��Ϊ���ַ�����Ӧ��ASCLL��ֵ������

//int main()
//{   //�㷨ʵ�� a�����b�д�֮��c��С
//	int a=0, b=0, c=0;
//	int temp;
//	scanf("%d %d %d", &a, &b, &c); //scanf()�мǵ���������������Ӧ�ķ��ţ�
//	                    //���������ַ�Ϊ�ո�
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
//		printf("���������룺\n");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0) //
//		{
//			printf("������ȷ��");
//			break;
//		}
//		else
//		{
//			printf("�������");
//			i++;
//		}
//	}
//	//printf("%d", i);  //3 ֱ�Ӵ�ӡ����Ϊ3��һ�жϲ�������ֱ����������
//	if (i == 3)
//	{
//		printf("����ϵ18174452776�⿪");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to bit !!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2; //�����2����Ϊ
//                                    ������\0   �и�\0Ҳռһ���ַ�
//	int right = strlen(arr1) - 1;  //���Կ��Բ���������һ��ķ���
//	while (left < right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right]; //������������arr1�е��ַ��滻��arr2��ȥ
//		printf("%s\n", arr2);
//		��Ϣһ��
//		Sleep(1000);    //1000���� = 1�룻
//		system("cls");  // ִ��ϵͳ�����һ������-cls-  �����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{   //�۰���ҷ���  ���ֲ��ҷ�
//	int arr[] = { 1, 2, 3, 4, 5, 6, 8, 9, 10 };
//	int k = 17;
//	int k;
//	int sz = sizeof(arr) / sizeof(arr[0]);  //����Ԫ�ظ���
//	int left = 0;
//	int right = sz - 1;
//	int mid;
//	printf("��������Ҫ���ҵ�ֵk:\n");
//	scanf("%d", &k);  //ȡ��ַ�� &  Ҫ�ǵã������������
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
//			printf("�ҵ���,�±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (right < left)
//	{
//		printf("�Ҳ�����");  //�����Ƿֺ�
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
//		p = 1; //�ٴν�ȥʱpҪ���ó�ֵ
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
//	printf("������n��ֵ��\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		m = m * i;
//	}
//	printf("n! = %d", m);  //�ǵ���һ��m���棬n��������n
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;//1 2 3 4 
//		    continue; //1 2 3 4 ��ѭ����
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10); //�ֺ�����
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;      //��jΪ��0���ͻ���һ����ѭ����
//	for (i = 0, j = 0; j = 0; i++, j++) //�ж�  ��ֵ��� j=0 0�Ǽ٣�����ѭ��һ�Σ��ж���һ�ξͳ����ˣ�
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


//2.����for����ѭ�����Ʊ�����ȡֵ��ȡ��ǰ�պ����䡱д��
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i;
//	for (i = 0; i < 10; i++) {//��ǰ�պ����䡱д��
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//1.������forѭ�����޸�ѭ����������ֹforѭ��ʧȥ����
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

//forѭ��
//int main()
//{
//	int i = 0;
//	//   ��ʼ��  �ж�     ����
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;//1234
//		    continue;//1234678910  ���������ѭ��
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;   //��ʼ��
//	while (i <= 10)//�ж�
//	{
//		if (i == 5)
//			continue;//������ѭ��
//		printf("%d ", i);
//		i++;  //����
//	}
//}



//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF)// ���� EOF Ҫ��ctrl+z �˳�
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
//	printf("����������:");
//	scanf("%s", password);
//	//
//	//
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��Y/N");
//	ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("����ȷ��");
//	}
//	return 0;
//}
//int main() {
//	/*int ch = getchar();
//	putchar(ch);
//	printf("%c", ch);*/         
//	int ch = 0;               //EOF �Ҽ�������ѡת�����壬�ɲ鿴
//	while ((ch = getchar()) != EOF)  //ע�����ȼ�����Ҫ©������
//	{             //EOF -- end of file �ļ�������־   ʵΪ ��-1��
//		putchar(ch);   //ctrl+C  ֹͣ  ctrl+z��ֹ����
//	}
//	return 0;
//}
//int main() {
//	int i = 1;
//	while (i<100)//����ֻ��һֱ��F10�����ˣ��������ʱ��ɿ�����Ч��
//	{
//		i++��
//		if (i == 5)
//			/*break;*///������ֹѭ��
//			continue;  //��ֹѭ���б���ѭ������ת���´�ѭ��
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
//	case 2: n++;  //û��break�Ͳ���ֹͣ���ͻ�һֱ����ȥ
//	case 3: 
//		switch (n)
//		{  //switch����Ƕ��ʹ��
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