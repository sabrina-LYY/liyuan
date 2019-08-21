#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////用来声明符号
//extern int g_val;
//int main()
//{
//	register int a = 10;//把10放到寄存器a中，一般在处理大量数据时才放到寄存器中，有时不加register，如果寄存器有空，编译器也会自动存进去。
//	printf("%d\n", g_val);
//	return 0;
//}


//1.typedef unsigned int u_int;//给unsigned int起的别名u_int
//int main()
//{
//	unsigned int a = 0;
//	u_int b = 0;
//	return 0;
//}


//2.typedef struct S//给struct S起的简化别名为S
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
//	for (i = 101; i <=200; i+=2)//去掉对偶数的判断
//	{
//		int j = 0;
//		int flag = 1;//是素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}

////1.交换两个整数
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


////求10个整数中的最大值******
//int main()
//{
//	int i = 0;
//	int arr[10] = { 28, 5, 100, 4, 5, 57, 7, 8, 9, 10 };
//  int max = arr[0];//不能把max初始化为0，如果数组中为负数那么结果就为0，是错误的
//	for (i = 0; i <=9; i++)
//	{
//		if (arr[i] >max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}


////1.day10计算整数的二进制有几个1
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

////4.将三个数从大到小排列
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



////2. 方法一不允许创建临时变量，交换两个数的内容
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

//2. 方法二不允许创建临时变量，交换两个数的内容（数字大时不适用）
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

////5.方法一求两个数的最大公约数。
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


//5.方法二求两个数的最大公约数。（辗转相除法）****(最小公倍数：a*b/ab的最大公约数)****
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