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
	list->next = &member;				/*�ɻ�,��Ӧ����*listָ��ָ��������nextָ����,Ϊʲô��list->next,������ǰ���ټ�*��*/
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
