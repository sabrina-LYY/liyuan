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
		printf("ͨѶ¼������");
		return;
	}
	//������Ϣ
	printf("������������");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("���������䣺");
	scanf("%d", &(pcon->data[pcon->sz].age));
	printf("�������Ա�");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("������绰���룺");
	scanf("%s", pcon->data[pcon->sz].tele);
	printf("�������ַ��");
	scanf("%s", pcon->data[pcon->sz].addr);
	pcon->sz++;
	printf("���ӳɹ�\n");
}
void ShowContact(const Contact *pcon)
{
	int i = 0;
	assert(pcon);
	printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ ");
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

//������Ϣ
static int FindByName(Contact *pcon, char name[])
{
	int i = 0;
	assert(pcon);
	for (i = 0; i < pcon->sz; i++)
	{
		if(0==strcmp(name , pcon->data[i].name))
			return i;
	}
	return -1;//�Ҳ���
}

void DelContact(Contact *pcon)
{
	int i = 0;
	int pos = 0;
	char name[NAME_MAX];
	assert(pcon);
	if (pcon->sz == 0)
	{
		printf("ͨѶ¼�ѿգ��޷�ɾ����");
		return;
	}
	printf("������Ҫɾ���˵����֣�");
	scanf("%s", name);
	pos = FindByName(pcon, name);
	if (pos == -1)
	{
		printf("Ҫɾ�������Ҳ�����");
		return;
	}
	for (i = pos; i < pcon->sz;i++)
	{
		pcon->data[i] = pcon->data[i + 1];
	}
	pcon->sz--;   //ɾ��֮��Ҫ����Ԫ��
	printf("ɾ���ɹ���");

}