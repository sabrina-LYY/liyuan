#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////1. ������A�е����ݺ�����B�е����ݽ��н�����������һ���� 
//void Swap(int arr1[5], int arr2[5])
//{
//	int arr3[5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		arr3[i] = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = arr3[i];
//	}
//
//}
//int main()
//{
//	int arr1[5] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 5, 6, 7, 8, 9 };
//	int i = 0;
//	
//	Swap(arr1, arr2);
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

////2. ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ�� 
//int main()
//{
//	int i = 1;
//	
//	double sum = 0;
//	while (i <= 100)
//	{
//		if (i % 2 == 0)
//			sum -= (1.0 / i);
//		else
//			sum += (1.0 / i);
//		i++;
//
//	printf("%f\n", sum);
//	return 0;
//}

////3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if( i / 10 == 9)
//			count++;
//
//	}
//	printf("%d\n", count);
//
//	return 0;
//}


