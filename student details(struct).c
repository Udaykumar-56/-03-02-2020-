#include<stdio.h>
struct student
{
char name[100];
int rno;
float fee;
char add[1000];
}s;
int main()
{
strcpy(s.name,"uday");
s.rno=56;
s.fee=247500;
strcpy(s.add,"hyd");
printf("\n STUDENT DETAILS\n");
scanf("\n name:%s",s.name);
printf("\n rno:%d",s.rno);
printf("\n fee:%.2f",s.fee);
printf("\n address:%s",s.add);
return 0;
}