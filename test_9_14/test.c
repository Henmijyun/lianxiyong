#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//#include<stdio.h>
//void print(int n)      //������:123 Ϊ����
//{
//	if (n > 9)         //��һ��123>9��ȥ,123/10=12,�ڶ���12>9�ٽ�ȥ,12/10=1,�����ν�ȥ1!>9,�����ݹ�
//	{
//		print(n / 10); //������ʱn=1����,1%10=1,��ӡ1,������һ��12%10=2,��ӡ2,�ٷ�����һ��123%10=3,��ӡ3
//	}
//	printf("%d ", n % 10);//���Եó��Ľ��Ϊ1 2 3
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//�ݹ�
//	print(num);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
////int my_strlen(char* str)   //����Զ��庯������ʵ�����ַ�������,����������ʱ����,���Ҳ��ǵݹ�
////{
////	int count = 0;
////	while (*str != '\0') //��Ϊ����Ԫ�ؿ�ʼ,b����\0,�ͼ�¼һ��,bit��3��,count��0�ӵ���3,�ٷ���count��ֵ
////	{
////		count++;
////		str++;     //str++ÿ+һ��,������һ����λ b -> i -> t -> \0
////	}
////	return count;
////}
//int my_strlen(char* str)  //�ݹ�ķ���
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
////�Ѵ��»�С
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);  //���ַ������ȵ� �⺯��
//	//printf("%d\n", len);
//	//ģ��ʵ��һ�����ַ������ȵ� �Զ��庯��
//	int len = my_strlen(arr); //arr������,���鴫��,����ȥ�Ĳ�����������,���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len=%d\n", len);  
//	return 0;
//}
//
//#include<stdio.h>
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;        //����5��5>1,��ȥ5*Fac2,��ȥ5-1=4��4>1,�ٽ�ȥ4*Fac2���������5-4-3-2-1��
//	else
//		return n * Fac2(n - 1);  //��1=1����1�������ݹ飬���Ϸ���ֵ,ʹ1*2*3*4*5����÷��ؼ�����
//}
//int main()
//{
//	//��n�Ľ׳�
//	int n = 0;
//	int ret1 = 0;
//	int ret2 = 0;
//	scanf("%d", &n);
//
//	ret1 = Fac1(n);//ѭ���ķ�ʽ
//	printf("%d\n", ret1);
//
//	ret2 = Fac2(n);//�ݹ�ķ�ʽ
//	printf("%d\n", ret2);
//	return 0;
//}



////쳲��������У�1 1 2 3 5 8 13 21 34 55... ǰ��������֮�͵��ڵ���������
////int count = 0;
////int Fid(int n)
////{
////	if (n == 3)//���Ե�����쳲��������ļ������
////	{
////		count++;
////	}
////	if (n <= 2)
////		return 1;
////	else
////		return Fid(n - 1) + Fid(n - 2);//��ʱ�õݹ�Ͳ��Ǳ����ķ�����
////		
////}
//int Fid(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//
//	//TDD--������������
//	ret = Fid(n);
//	printf("ret = %d\n", ret);
//	//printf("count=%d\n", count);
//	return 0;
//}
//
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}

//int Fan()
//{
//	printf("############��###########\n");
//	printf("############��###########\n");
//	printf("############��###########\n");
//	printf("############��###########\n");
//	printf("####1.�_ʼ����2.�K���###\n\n");
//	printf("����1��2���x��Ǥ�������\n");
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int a1 = 0;
//	Fan();
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("���`���_ʼ\n\n�ä����Ԅe���x��Ǥ�������:\n##1.�С���2.Ů##\n");
//		while (a ==1 )
//		{
//			if (a1 == 1)
//			{
//				printf("#111111111\n");
//				break;
//			}
//			else if (a1 == 2)
//			{
//				printf("##122222\n");
//				break;
//			}
//			else
//			{
//				printf("�Ԅe�⤦һ���������Ƥ���������\n##1.�С���2.Ů##\n");
//				goto again;
//
//			}
//
//		}
//
//		break;
//	case 2:
//		printf("�K���");
//		break;
//	default:
//		printf("�`�꤬�k���������⤦һ���������Ƥ���������");
//		break;
//
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 100;
//	int b = 30;
//	int c = a - b;
//	int d = a % b;
//	printf("a�΂���%d�Ǥ���\nb�΂���%d�Ǥ���\nc�΂���%d�Ǥ���\nd�΂���%d�Ǥ���\n", a, b, c, d);
//	return 0;
//}


////��ŵ������
//#include<stdio.h>
//void move(int n, char x, char y, char z)
//{
//	if (n == 1)
//	{
//		printf("Բ�̱��%d����%c�ƶ���%c��\n", n, x, z);
//	}
//	else
//	{
//		move(n - 1, x, z, y);
//		printf("Բ�̱��%d����%c�ƶ���%c��\n", n, x, z);
//		move(n - 1, y, x, z);
//	}
//}
//
//int main()
//{
//	char ch1 = 'a';//abc��������
//	char ch2 = 'b';
//	char ch3 = 'c';
//	int n = 0;    //n��������
//	printf("���������Ӹ���:\n");
//	scanf("%d", &n);
//	move(n, ch1, ch2, ch3);
//
//	return 0;
//}

////������̨������
//#include<stdio.h>
//int frog(int n)
//{
//    if (n == 1)
//    {
//        return 1;
//    }
//    if (n == 2)
//    {
//        return 2;
//    }
//    return frog(n - 1) + frog(n - 2);
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int ways = frog(n);
//    printf("%d\n", ways);
//    return 0;
//}
//
////����
//#include<stdio.h>
//int main()
//{
//	int a = 25;
//	int b = 3;
//	float c;
//	//printf("һ��Ŀ�����֤����������¤���\n");
//	//scanf("%d", &a);
//
//	//printf("����Ŀ�����֤����������¤���\n");
//	//scanf("%d", &b);
//
//	c = (float)a / b;//������ʽ��ʡ�ԣ���ʾС����������
//	printf("%d/%d=%.3f\n", a, b, c);
//
//	return 0;
//}

//#include<stdio.h>
//main()
//{
//	//����һ������-�������-10��;   []��������������ǳ����������Ǳ���
//	int arr[10] = { 1,2,3 };  //����ȫ��ʼ��,ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5] = { 'a',98,'c'};  //98������b����Ϊb��ASCIIֵΪ98��
//	char arr3[5] = "abc";  //ok��"abc\000"
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//���� arr4��ռ�ռ�Ĵ�С-->����\0��7��Ԫ��,char 7*1=���Ϊ 7
//
//	printf("%d\n", strlen(arr4));//strlen ���ַ����ĳ���;[a b c d e f \0];ֻ����\0֮ǰ���ַ�����,���Ϊ 6
//
//	//1. strlen �� sizeofû��ʲô����
//	//2. strlen �����ַ������ȵ�-ֻ������ַ����󳤶� - �⺯�� - ʹ����Ҫ����ͷ�ļ�
//	//3. sizeof ������������顢���͵Ĵ�С-��λ���ֽ� - ������
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";           //a b c \0
//	char arr2[] = { 'a','b','c' }; //a b c 
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//arr2����û��\0�����Խ�������ֵ
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";//[a][b][c][d][e][f][\0] ,�±��0��ʼ
//	//printf("%c\n", arr[3]);//��ӡ�����ַ�d��[]������Ҫ��ӡ���ַ��±�,d���±�Ϊ3
//	//�����ӡ�����ַ���,����ʹ��ѭ������
//	int i = 0;
//	//for (i = 0; i < (int)strlen(arr); i++)  //�����strlen����Ƕ��for������,���arr[]�ĳ��Ⱥ���빫ʽ
//	//{                                 //strlen��Ĭ�Ϸ���ֵ��һ���޷�������ֵ,ǰ��(int)ǿ������ת��,ʹ������з�������ֵ
//	//	printf("%c ", arr[i]);
//	//}
//	int len = strlen(arr);  //����������д��,����strlen����for
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//
//	int arr2[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr2) / sizeof(arr2[0]);//�ܴ�С - ���� - һ��Ԫ�صĴ�С - ���� - Ԫ�ظ���
//	int a = 0;
//	for (a = 0; a < sz; a++)
//	{
//		printf("%d ", arr2[a]);//�������±�����ӡ,�±��0��ʼ,������ѭ����������ӡ
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}


int main()
{
	int arr[3][4]; //�������� ������:��һ������ʾ���������,�ڶ�������ʾ���������.
	return 0;
}