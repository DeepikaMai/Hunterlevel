#include<stdio.h>
#include<conio.h>

void main()

{

int a[10],i,j,len;

   clrscr();

      printf("Enter the list of elements to be in a array ");

scanf("%d",&len);
printf("Enter the array elements ");
for(i=0;i<len;i++)

{
scanf("%d",&a[i]);

}

 /* to check the elements in array*/

for(i=0;i<len;i++)

{

 for(j=i+1;j<len;j++)

 {

  if(a[i]==a[j])

  {

   printf("The Same elemnts in array is : %d ",a[i]);
   break;

  }
  break;

 }

}

 getch();

 }