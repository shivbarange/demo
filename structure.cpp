#include <stdio.h>

struct st
{
int roll_no;
char name[20];
float marks;	
};
int main()
{
struct st s;
s.roll_no=23;
s.name = "shiv";
s.marks=23.3;
//printf("enter roll no\n");
//scanf("%d",&s.roll_no);
//printf("enter name\n");
//scanf("%s",s.name);
//printf("enter marks\n");
//scanf("%f",&s.marks);
printf("roll no =%d\nname =%s\nmarks =%f\n",s.roll_no,s.name,s.marks) ;	
}
