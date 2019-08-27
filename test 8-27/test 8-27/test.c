#define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>

//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//int main()
//{
//	int row = 0;
//	int col = 0;
//	int input = 0;
//	int mult = 0;
//	scanf("%d", &input);
//	for (row = 1; row <= input; row++)
//	{
//		for (col = 1; col <= row; col++)
//		{
//			mult = row*col;
//			printf("%d=%d*%d ", mult, row, col);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//2.使用函数实现两个数的交换。 
//void Swap(int* a, int* b)
//{
//	int tmp = 0;
//	tmp =* a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf("%d%d", &i, &j);
//	Swap(&i, &j);
//	printf("%d %d\n", i, j);
//	return 0;
//}



//3.实现一个函数判断year是不是润年。

//void  Swap(int a)
//{
//	
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//		printf("%d年是闰年\n", a);
//	else
//		printf("%d年不是闰年\n", a);
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	Swap(year);
//	return 0;
//}

//5.实现一个函数，判断一个数是不是素数。
//void isprime(int i)
//{
//	int j = 0;
//	for (j = 2; j < i; j++)
//	{
//		if (i%j != 0)
//		{
//			printf("%d是素数\n", i);
//			break;
//		}
//		else if (i%j == 0)
//		{
//			printf("%d不是素数\n", i);
//			break;
//		}
//	}
//}
//int main()
//{
//	int a=0;
//	scanf("%d", &a);
//	isprime(a);
//	return 0;
//}

//4. 创建一个数组，实现函数init（）初始化数组、实现empty（）清空数组、实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。void *memset( void *dest, int c, size_t count );


void arrinit(int *arr, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
		arr[i] = i;
}
void arrempty(int *arr, int size)
{
	memset(arr, 0, sizeof(arr[0])*size);
	
}
void arrreverse(int *arr, int size)
{
	int left = 0;
	int right = size-1;
	int tmp = 0;
	while (left < right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}

}
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	arrinit(arr,sz);
	arrempty(arr,sz);
	arrreverse(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}