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

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
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
			printf("�˳�����\n");
			break;
		default:
				   printf("����������������룡\n");
				   break;
		};
	} while (input);
	return 0;
}