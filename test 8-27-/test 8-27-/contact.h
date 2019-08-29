#include<stdio.h>
#include <string.h>
#include <assert.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 25
#define TELE_MAX 12


#define MAX 1000

typedef struct PeoInfo 
{
	char name[NAME_MAX];
	short age;
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
	char tele[TELE_MAX];
}PeoInfo;

enum option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	CLEAR,
	SORT,
	SAVE,
	LOAD
};


//ͨѶ¼�ṹ��
typedef struct Contact
{
	PeoInfo data[MAX];  //���1000���˵�����
	int sz;         //��Ч���ݸ���
}Contact;

//��ʼ��ͨѶ¼
void InitContact(Contact *pcon);
//���
void AddContact(Contact *pcon);
//��ʾ
void ShowContact(const Contact *pcon);
//ɾ��
void DelContact(Contact *pcon);