#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	int no;
	char name[20];
	float marks;
	struct st *next;
}SL;

SL*hptr;
void add_begin();
void print_nodes();

int main()
{
	char ch;
	do{
		add_begin();
		printf("do you want to add node again:Y/N\n");
		scanf(" %c",&ch);
	}while(ch=='Y'||ch=='y');
	print_nodes();
}
void print_nodes()
{
	SL*ptr=hptr;
	while(ptr)
	{
		printf(" %d %s %f\n",ptr->no,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
}
void add_begin()
{
	SL*New=(SL*)malloc(sizeof(SL));
	printf("enter no name marks\n");
	scanf("%d %s %f",&New->no,New->name,&New->marks);
	New->next=hptr;
	hptr=New;
	
}


