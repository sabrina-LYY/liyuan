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


//通讯录结构体
typedef struct Contact
{
	PeoInfo data[MAX];  //存放1000个人的数据
	int sz;         //有效数据个数
}Contact;

//初始化通讯录
void InitContact(Contact *pcon);
//添加
void AddContact(Contact *pcon);
//显示
void ShowContact(const Contact *pcon);
//删除
void DelContact(Contact *pcon);