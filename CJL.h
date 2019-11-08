#ifndef CJL
#define CJL
#include <stdio.h>
#include <stdlib.h>



typedef struct LL
{
	int num;
	struct LL* next;
}LL;

void Creat_LL(LL* list)
{
	LL head;
	head.next = NULL;
	list = &head;
}

void Add_LL(LL** llp,LL* list)
{
	LL member;
	list->next = &member;				/*疑惑,不应该是*list指针指向的链表的next指针吗,为什么是list->next,而不是前面再加*号*/
	member.next = NULL;
	*llp = &member;
}

void Putin_LL(LL* list, LL** llp)
{
	int turner = 0;
	do
	{
		scanf_s("%d", &turner);
		if (turner)
		{
			list->num = turner;
			printf("%d", list->num);
			if (getchar() == '\n')
			{
				Add_LL(llp,list);
			}
		}
	} while (turner);
}

//void Putout_LL(LL* list)
//{
//	printf("%d", list->num);
//}


#endif
