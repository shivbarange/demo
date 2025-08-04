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
void delete_node(SL**);
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
    delete_node(&hptr);
    printf("after deletion\n");
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
void delete_node(SL**ptr)
{
	int n;
	printf("enter the roll no. whose data you want to delete\n");
	scanf("%d",&n);
	SL*temp=*ptr,*temp2;
	while(temp)
	{
		if(temp->no==n)
		{
			if(temp==*ptr)//checking first node
			{
				*ptr=temp->next;
			}
			else
			{
				temp2->next=temp->next;
			}
			free(temp);
			return;
		}
		temp2=temp;
		temp=temp->next;
	}
}




