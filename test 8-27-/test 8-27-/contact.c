#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void InitContact(Contact *pcon)
{
	assert(pcon);
	pcon->sz = 0;
	memset(pcon->data, 0, sizeof(pcon->data));
}

void AddContact(Contact *pcon)
{
	assert(pcon);
	if (pcon->sz == MAX)
	{
		printf("通讯录已满！");
		return;
	}
	//输入信息
	printf("请输入姓名：");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("请输入年龄：");
	scanf("%d", &(pcon->data[pcon->sz].age));
	printf("请输入性别：");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("请输入电话号码：");
	scanf("%s", pcon->data[pcon->sz].tele);
	printf("请输入地址：");
	scanf("%s", pcon->data[pcon->sz].addr);
	pcon->sz++;
	printf("增加成功\n");
}
void ShowContact(const Contact *pcon)
{
	int i = 0;
	assert(pcon);
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "地址 ");
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s\n",
			pcon->data[i].name,
			pcon->data[i].age,
			pcon->data[i].sex,
			pcon->data[i].tele,
			pcon->data[i].addr);
	}
}

//查找信息
static int FindByName(Contact *pcon, char name[])
{
	int i = 0;
	assert(pcon);
	for (i = 0; i < pcon->sz; i++)
	{
		if(0==strcmp(name , pcon->data[i].name))
			return i;
	}
	return -1;//找不到
}

void DelContact(Contact *pcon)
{
	int i = 0;
	int pos = 0;
	char name[NAME_MAX];
	assert(pcon);
	if (pcon->sz == 0)
	{
		printf("通讯录已空，无法删除！");
		return;
	}
	printf("请输入要删除人的名字！");
	scanf("%s", name);
	pos = FindByName(pcon, name);
	if (pos == -1)
	{
		printf("要删除的人找不到！");
		return;
	}
	for (i = pos; i < pcon->sz;i++)
	{
		pcon->data[i] = pcon->data[i + 1];
	}
	pcon->sz--;   //删除之后要减少元素
	printf("删除成功！");

}