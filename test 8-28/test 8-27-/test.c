#define _CRT_SECURE_NO_WARNINGS 1

//strtok的使用
//int main()
//{
//	char arr[] = "liyuan@1234456.abc";
//	char tmp[20] = { 0 };
//	strcpy(tmp, arr);
//	const char *sep = "@.";
//	char *ret=NULL;
//	for (ret = strtok(tmp, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}



#include "contact.h"

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			break;
		case DEL:
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			break;
		case CLEAR:
			break;
		case SORT:
			break;
		case SAVE:
			break;
		case LOAD:
			break;
		case EXIT:
			printf("退出程序！\n");
			break;
		default:
				   printf("输入错误，请重新输入！\n");
				   break;
		};
	} while (input);
	return 0;
}