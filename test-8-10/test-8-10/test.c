#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int line = 0;
//	printf("加入我们\n");
//	while (line < 20)
//	{
//		printf("写代码\n");
//		line++;
//	}
//	if (line == 20);
//	{
//		printf("找工作\n");
//	}	
//	return 0;
//}




////用函数来计算两个数的加法
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x+y;
//	return z;
//}
//int main()
//{
//	int a = 100;
//	int b = 14;
//	int sum = 0;
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1,&num2);
//	sum =Add(num1, num2);
//	printf("sum=%d\n", sum);
//	sum = Add(a, b);
//	printf("sum=%d\n",sum );
//	return 0;
//}

//


//打印100到200之间的素数
//int main()
//{
//	int i = 100;
//	int n = 0;
//	while (i <= 200)
//	{
//		for (n = 2; n < i; n++)
//		{
//			if (i % n == 0)
//				break;  
//		}
//		if (i == n)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	printf("\n");
//	return 0;
//}


////判断1000年到2000年之间的闰年
//int main()
//{
//	int i = 1000;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//			printf("%d ", i);
//		else
//			continue;
//	}
//	return 0;
//}


//打印乘法口诀表
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
				printf("%d * %d = %d  ", i, j, i*j);

		}
		printf("\n");
	}	
	return 0;
}

