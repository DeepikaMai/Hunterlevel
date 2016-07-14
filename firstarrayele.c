#include<stdio.h>
#include<conio.h>
void main()
{
int a[],i,j,len;
clrscr();
printf("Enter the list of elements to be in a array ");
scanf("%d",&len);
for(i=0;i<len;i++)
{
 scanf("%d",a);
 }
 /* to check the elements in array*/
for(i=0;i<len;i++)
{
 for(j=i+1;j<len;j++)
 {
  if(a[i]==a[j])
  {
   printf("The similar elemnt is : %d ",a[i]);
   break;
  }
 }
}
 getch();
 }
