#include<stdio.h>
#define NAME_MAX 20
#define SEX_MAX 5
#define ADDR_MAX 25
#define TELE_MAX 12
#define AGE_MAX 4

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
typedef struct contact 
{
	char name[NAME_MAX];
	short age[AGE_MAX];
	char sex[SEX_MAX];
	char addr[ADDR_MAX];
	char tele[TELE_MAX];
}con;

enum opt
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