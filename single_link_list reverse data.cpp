#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    int no;
    char name [20];
    float marks;
    struct student *next;
}SL;
void add_begin(void);
void print_nodes(void);
int count_nodes(SL*);
void rev_data(SL*);
SL*hptr;

int main() 
{
    char ch;
    do{
        add_begin();
        printf("do you want to add node again:Y/N\n");
        scanf(" %c",&ch);
    }while((ch=='y')||(ch=='Y'));
    print_nodes();
    printf("after rev data\n");
    rev_data(hptr);
    print_nodes();
}
void print_nodes(void)
{
    SL*ptr=hptr;
    while(ptr)
    {
        printf("%d %s %f\n",ptr->no,ptr->name,ptr->marks);
        ptr=ptr->next;
    }
}
void add_begin(void)
{
    SL* new =(SL*)malloc(sizeof(SL));
    printf("enter no name marks\n");
    scanf("%d %s %f",&new->no,new->name,&new->marks);
    new->next=hptr;
    hptr=new; 
}
int count_nodes(SL*ptr)
{
	int c=0;
	while(ptr!=0)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}
void rev_data(SL*ptr)
{
	int c,i,j;
	c=count_nodes(ptr);
	SL *p1,*p2,temp;
	p1=ptr;
	for(i=0;i<c/2;i++)
	{
		p2=ptr;
		for(j=0;j<c-1-i;j++)
		{
			p2=p2->next;
		}
		temp.no=p1->no;
		p1->no=p2->no;
		p2->no=temp.no;
		
		strcpy(temp.name,p1->name);
		strcpy(p1->name,p2->name);
		strcpy(p2->name,temp.name);
		
		temp.marks=p1->marks;
		p1->marks=p2->marks;
		p2->marks=temp.marks;
		p1=p1->next;
	}
}




