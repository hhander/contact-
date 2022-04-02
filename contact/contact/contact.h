#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

#define max_name 20
#define max_tele 15
#define max_sex 10
#define max_addr 30
#define MAX 1000

enum option
{
	Quit,
	Add,
	Del,
	Research,
	Modify,
	Show,
	Sort,
};


struct PeoInfo
{
	char name[20];
	char tele[15];
	char sex[10];
	char addr[30];
	int age;
};

struct contact
{
	struct PeoInfo date[MAX];
	int size;
};

void InitContact(struct contact* ps);
void Add_contact(struct contact* ps);
void ShowContact(struct contact* ps);
void DelContact(struct contact * ps);
void Research_contact(struct contact* ps);
void Modify_contact(struct contact* ps);
void Sort_contact(struct contact* ps);

