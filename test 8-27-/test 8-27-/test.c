#define _CRT_SECURE_NO_WARNINGS 1

//strtok��ʹ��
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
void menu()
{
	printf("****************************\n");
	printf("***  1.ADD      2.DEL    ***\n");
	printf("***  3.SEARCH   4.MODIFY ***\n");
	printf("***  5.SHOW     6.CLEAR  ***\n");
	printf("***  7.SORT     8.SAVE   ***\n");
	printf("***  9.LOAD     0.EXIT   ***\n");
	printf("****************************\n");
}

int main()
{
	int input = 0;
	//����ͨѶ¼
	Contact con;
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			ShowContact(&con);
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
			printf("�˳�����\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
	return 0;
}