#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,b,count=0;
clrscr();
printf("Enter a number to get no of 2s");
scanf("%d",&a);
b=a;
for(i=0;i<a;i++)
{
if(i%2==0)
count++;
}
printf("The number of 2s between the range 0 and %d is %d",b,count);
getch();
}