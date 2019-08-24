#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大） 
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

////2. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。 
//int main()
//{
//	int i = 1;
//	
//	double sum = 0;                //改正：sum=0.0,再定义变量flag
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

////3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
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



//用do...while循环输出0到9
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

//求1!+2!+....+10!的结果
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


 //二分查找
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	scanf("%d", &k);
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;  //循环体中为一次二分查找
//		if (arr[mid] > k)
//			right=mid-1;
//		if (arr[mid] < k)
//			left=mid+1;
//		else
//		{
//			printf("找到了\n");
//			break;                      //如果找到了就不用了再找，所以用break
//		}
//	}
//	if (left>right)
//		printf("找不到\n");
//	return 0;
//}

//welcome to bit!!!!!!
//打印方式为
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
//		system("cls");           //清屏，要添加头文件
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//模拟用户登录，用户只能输入三次密码，三次错误自动退出
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);                 //数组名本身就是数组首元素地址，所以不用&
//		if (strcmp(password, "123456") == 0)  //strcmp用于字符串比较，如果相等则返回0
//		{
//			printf("登陆成功！\n");
//			break;
//		}
//		else
//			printf("登陆失败！请重新输入。\n");
//
//	}
//	if (i == 3)
//		printf("三次输入错误，登陆失败\n");
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
//	ret = rand() % 100 + 1;//随机生成的数字控制在1到100
//	int num = 0;  //猜测的数字
//	while (1)
//	{
//		printf("请输入要猜的数字：>");
//		scanf("%d", &num);
//		if (num > ret)
//			printf("猜大了\n");
//		else if (num < ret)
//			printf("猜小了\n");
//		else
//		{
//			printf("猜对了\n");
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
//		printf("请选择：>", &input);
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 0:
//			printf("退出游戏\n");
//			break;
//		case 1:
//			game();
//			break;
//		default:
//			printf("输入有误，请重新输入！\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

//2.写代码可以在整型有序数组中查找想要的数字， 找到了返回下标，找不到返回 - 1.（折半查找

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
//			printf("找到了");
//			return mid;//找到了
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//		return -1;
//	}
//}

//3.编写代码模拟三次密码输入的场景。最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//#include<string.h>
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功！\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误，请重新输入!\n");
//		}
//	}
//	if (i == 3)
//		printf("三次输入错误，登录失败\n");
//
//	return 0;
//}

//4.编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。

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