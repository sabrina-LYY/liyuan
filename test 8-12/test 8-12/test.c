#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//结构体---自定义类型
//struct PeoInfo
//{
//	char name[20];
//	char sex[10];
//	short age;
//	short height;
//	float weight;
//};
//
//int main()
//{
//	struct PeoInfo p = {"张三","男",20,180,88.6};
//	struct PeoInfo * ptr = &p;
//	printf("%s %s\n", p.name, p.sex);
//	printf("%s %s\n", (*ptr).name, (*ptr).sex);
//	printf("%s %s\n", ptr->name, ptr->sex);
//
//	
//	return 0;
//}


////(1)switch...case 语句可以实现多分支，语句中的day必须为整形.
//int main()
//{
//	int day = 10;
//
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//(2)
//(1)switch...case 语句可以实现多分支，语句中的day必须为整形.
//int main()
//{
//	int day = 6;
//
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}


