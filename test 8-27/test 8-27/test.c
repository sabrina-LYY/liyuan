#define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>

//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��������9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
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


//2.ʹ�ú���ʵ���������Ľ����� 
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



//3.ʵ��һ�������ж�year�ǲ������ꡣ

//void  Swap(int a)
//{
//	
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//		printf("%d��������\n", a);
//	else
//		printf("%d�겻������\n", a);
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	Swap(year);
//	return 0;
//}

//5.ʵ��һ���������ж�һ�����ǲ���������
//void isprime(int i)
//{
//	int j = 0;
//	for (j = 2; j < i; j++)
//	{
//		if (i%j != 0)
//		{
//			printf("%d������\n", i);
//			break;
//		}
//		else if (i%j == 0)
//		{
//			printf("%d��������\n", i);
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

//4. ����һ�����飬ʵ�ֺ���init������ʼ�����顢ʵ��empty����������顢ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��void *memset( void *dest, int c, size_t count );


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