#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////������������
//extern int g_val;
//int main()
//{
//	register int a = 10;//��10�ŵ��Ĵ���a�У�һ���ڴ����������ʱ�ŷŵ��Ĵ����У���ʱ����register������Ĵ����пգ�������Ҳ���Զ����ȥ��
//	printf("%d\n", g_val);
//	return 0;
//}


//1.typedef unsigned int u_int;//��unsigned int��ı���u_int
//int main()
//{
//	unsigned int a = 0;
//	u_int b = 0;
//	return 0;
//}


//2.typedef struct S//��struct S��ļ򻯱���ΪS
//{
//	int a;
//	char b;
//	float c;
//}S;
//int main()
//{
//	struct S s;
//	S ss;
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 100;
//	
//	for (i = 101; i <=200; i+=2)//ȥ����ż�����ж�
//	{
//		int j = 0;
//		int flag = 1;//������
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

////1.������������
//void Swap(int *x, int *y)
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;	
//}
//
//int main()
//{
//	int a = 5;
//	int b = 3;
//	Swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


////��10�������е����ֵ******
//int main()
//{
//	int i = 0;
//	int arr[10] = { 28, 5, 100, 4, 5, 57, 7, 8, 9, 10 };
//  int max = arr[0];//���ܰ�max��ʼ��Ϊ0�����������Ϊ������ô�����Ϊ0���Ǵ����
//	for (i = 0; i <=9; i++)
//	{
//		if (arr[i] >max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}


////1.day10���������Ķ������м���1
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value)
//	{
//		if (value % 2 == 1)
//			count++;
//		value = value / 2;
//	}
//	
//	return count;
//}
//int main()
//{ 
//	int i = 0;
//	int b = 0; 
//	scanf("%d", &i);
//	b=count_one_bits(i);
//	printf("%d\n", b);
//	return 0;
//}

////4.���������Ӵ�С����
//void bubble_sort(int arr[])
//{
//	int i = 0;
//	int t = 0;
//	for (i = 0; i < 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j <3-i-1; j++)
//		{
//			if (arr[j] <= arr[j + 1])
//			{
//				t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//}
//	int main()
//	{
//		int i = 0;
//		int arr[3] = { 19, 56, 2 };
//		bubble_sort(arr);
//		for (i = 0; i <3; i++)
//		{
//			printf("%d\n", arr[i]);
//		}
//		return 0;
//	}



////2. ����һ����������ʱ����������������������
//int main()
//{
//	int a = 19;
//	int b = 25;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//2. ����������������ʱ���������������������ݣ����ִ�ʱ�����ã�
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	num1 = num1 + num2;
//	num2 = num1 - num2;
//	num1 = num1 - num2;
//	printf("%d %d\n", num1, num2);
//	return 0;
//}

////5.����һ�������������Լ����
//int main()
//{
//	int a = 32;
//	int b = 8;
//	int i = 0;
//	int c = 0;
//	int max = 0;
//	c = a > b ? a : b;
//	for (i = 2; i < c; i++)
//	{
//		if (a%i == 0 && b%i == 0)
//			max = i;
//	}
//	printf("%d\n", max);
//	return 0;
//}


//5.�������������������Լ������շת�������****(��С��������a*b/ab�����Լ��)****
int main()
{
	int a = 24;
	int b = 10;
	int c = 0;
	while (c = a%b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}