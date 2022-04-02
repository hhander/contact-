#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void menu()
{
	printf("******************************\n");
	printf("*****  1. Add       2.Del  ***\n");
	printf("*****  3. Research  4.Modify**\n");
	printf("*******5. Show      6.Sort  **\n");
	printf("*******       0. Quit       **\n");
	printf("******************************\n");
}

int main()
{
	struct contact con;
	InitContact(&con);
	int input = 0;
	do
	{
		menu();
		printf("请输入");
		scanf("%d", &input);
		switch (input)
		{
		case Add:
		{
			Add_contact(&con);
			break;
		}
		case Del:
		{
			DelContact(&con);
			break;
		}
		case Research:
		{
			Research_contact(&con);
		    break;
		}
		case Modify:
		{
			Modify_contact(&con);
			break;
		}
		case Show:
		{
			ShowContact(&con);
			break;
		}
		case Sort:
		{
			Sort_contact(&con);
			break;
		}
		case Quit:
		{
			printf("退出成功");
		     break;
		}
		default :
		{
			printf("输入错误");
			break;
		}
		}

	} while (input);
	return 0;
}