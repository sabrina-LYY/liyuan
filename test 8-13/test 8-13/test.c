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
//	double sum = 0;                //������sum=0.0,�ٶ������flag
//	while (i <= 100)               //for(i=0;i<=100;i++)
//	{                              //{
//		if (i % 2 == 0)             //  sum=flag*1.0/2;
//			sum -= (1.0 / i);       //   flag=-flag;       
//		else                        //}   
//			sum += (1.0 / i);       //printf("%lf",sum);
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



//��do...whileѭ�����0��9
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}
//

//��1!+2!+....+10!�Ľ��
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


 //���ֲ���
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;  //ѭ������Ϊһ�ζ��ֲ���
//		if (arr[mid] > k)
//			right=mid-1;
//		if (arr[mid] < k)
//			left=mid+1;
//		else
//		{
//			printf("�ҵ���\n");
//			break;                      //����ҵ��˾Ͳ��������ң�������break
//		}
//	}
//	if (left>right)
//		printf("�Ҳ���\n");
//	return 0;
//}

//welcome to bit!!!!!!
//��ӡ��ʽΪ
//####################
//w##################!
//we################!!
//wel##############!!!
//....
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!";
//	char arr2[] = "#####################";
//	int right = strlen(arr1)-1;
//	int left = 0;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		system("cls");           //������Ҫ���ͷ�ļ�
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//ģ���û���¼���û�ֻ�������������룬���δ����Զ��˳�
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);                 //�������������������Ԫ�ص�ַ�����Բ���&
//		if (strcmp(password, "123456") == 0)  //strcmp�����ַ����Ƚϣ��������򷵻�0
//		{
//			printf("��½�ɹ���\n");
//			break;
//		}
//		else
//			printf("��½ʧ�ܣ����������롣\n");
//
//	}
//	if (i == 3)
//		printf("����������󣬵�½ʧ��\n");
//
//	return 0;
//}
//#include<time.h>
//#include<stdlib.h>
//
//
//void menu()
//{
//	printf("***************************\n");
//	printf("*********  1. play*********\n");
//	printf("*********  0. exit*********\n");
//	printf("***************************\n");
//}
//void game()
//{
//	int ret = 0;
//	ret = rand() % 100 + 1;//������ɵ����ֿ�����1��100
//	int num = 0;  //�²������
//	while (1)
//	{
//		printf("������Ҫ�µ����֣�>");
//		scanf("%d", &num);
//		if (num > ret)
//			printf("�´���\n");
//		else if (num < ret)
//			printf("��С��\n");
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}	
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>", &input);
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("�����������������룡\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

//2.д����������������������в�����Ҫ�����֣� �ҵ��˷����±꣬�Ҳ������� - 1.���۰����

//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int num = 0;
//	scanf("%d", &num);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (right + left) / 2;
//		if (num < arr[mid])
//			right=mid-1;
//		else if (num > arr[mid])
//			left=mid+1;
//		else
//		{
//			printf("�ҵ���");
//			return mid;//�ҵ���
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//		return -1;
//	}
//}

//3.��д����ģ��������������ĳ���������������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����
//#include<string.h>
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��½�ɹ���\n");
//			break;
//		}
//		else
//		{
//			printf("�����������������!\n");
//		}
//	}
//	if (i == 3)
//		printf("����������󣬵�¼ʧ��\n");
//
//	return 0;
//}

//4.��дһ�����򣬿���һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������

int main()
{
	char cha = 0;
	scanf("%c", &cha);
	if (cha >= 97 && cha <= 122)
	{
		cha -= 32;
		printf("%c", cha);
	}
	else if (cha >= 65 && cha <= 90)
	{
		cha += 32;
		printf("%c", cha);
	}
	return 0;
}