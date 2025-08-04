#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    int no;
    char name [20];
    float marks;
    struct student *next;
}SL;
void add_end(void);
void print_nodes(void);
SL*hptr;

int main() 
{
    char ch;
    do{
        add_end();
        printf("do you want to add node again:Y/N\n");
        scanf(" %c",&ch);
    }while((ch=='y')||(ch=='Y'));
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
void add_end(void)
{
    SL* new =(SL*)malloc(sizeof(SL));
    printf("enter no name marks\n");
    scanf("%d %s %f",&new->no,new->name,&new->marks);
    if(hptr==0)
    {
        new->next=hptr;
        hptr=new;
    }
    else
    {
      SL*last=hptr;
      while(last->next!=0)
      {
          last=last->next;
      }
      new->next=last->next;
      last->next=new;
    }
}




