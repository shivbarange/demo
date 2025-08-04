#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    int no;
    char name [20];
    float marks;
    struct student *next;
}SL;
void add_begin(void);
void print_nodes(void);
void rev_link(SL**);
int count_nodes(SL*);
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
    printf("after reversing the link\n");
    rev_link(&hptr);
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

void rev_link(SL**ptr)
{
	int c,i=0;
	SL **p,*temp;
	c=count_nodes(*ptr);
	p=malloc(sizeof(SL*)*c);
	temp=*ptr;
	while(temp!=0)
	{
		p[i++]=temp;
		temp=temp->next;
	}
	p[0]->next=0;
	for(i=1;i<c;i++)
	{
		p[i]->next=p[i-1];
	}
	*ptr=p[c-1];
}




