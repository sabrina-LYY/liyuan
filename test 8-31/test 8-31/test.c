#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1.递归和非递归分别实现求第n个斐波那契数。 
//(1)递归
//int fib(int n)
//{
//	if(n<=2)
//		return 1;
//	
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 1;
//	scanf("%d", &n);
//	fib(n);
//	printf("%d\n", fib(n));
//	return 0;
//}

//（2）非递归
//int Fib(int i)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (i>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		i--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 1;
//	scanf("%d", &n);
//	int ret=Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//按顺序打印1234的各位1 2 3 4

//void Print(unsigned int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	Print(num);
//
//	return 0;
//}

//5.递归和非递归分别实现strlen 

//(1)递归int  my_strlen(char *str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//
//(2)
//int  my_strlen(char *str)
//{
//	if (*str == 0)
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//求n得阶乘

//int Fac(int num)
//{
//	if (num <= 1)
//		return 1;
//	while (num > 1)
//		return num*Fac(num - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//2.编写一个函数实现n^k，使用递归实现 

//int Pow(int n, int k)
//{
//	if (n <= 1||k == 0)
//		return 1;
//	while (n > 1&&k >= 1 )
//	{
//		return n*Pow(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = Pow(n, k);
//	printf("%d\n", ret);
//	return 0;
//}

//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//#include<stdlib.h>
//int  DigitSum(int num)
//{
//	
//	if (num < 10)
//	{
//		return num;
//	}
//	return  num % 10 + DigitSum(num / 10);
//}
//int main()
//{
//	int n=0;
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//	return 0;
//}

//4. 编写一个函数 reverse_string(char * string)（递归实现） 实现：将参数字符串中的字符反向排列。要求：不能使用C函数库中的字符串操作函数。
void reverse_string(char * str)
{
	if (*str == 0)
	{
		return 0;
	}
	reverse_string(str+1);
	printf("%c ", *(str));
}


int main()
{
	char *arr= "abcdef";
	reverse_string(arr);
	printf("\n");
	return 0;
}