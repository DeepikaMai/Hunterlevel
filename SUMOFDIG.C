#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,r,s=0;
clrscr();
printf("Enter the 2 digit num : ");
scanf("%d",&a);
b=sumofdigit(a);
printf("\n \t The sum of digit is = %d",b);
c=b;
while(b!=0)
{
r=b%10;
s=s*10+r;
b=b/10;
}
if(s==c)
printf("\n \t The number  %d entered is palindrome ",s);
else
printf("\n \t The number  %d entered is not  palindrome ",s);

getch();
}

int sumofdigit(x)
{
int r,s=0;
while(x!=0)
{
r=x%10;
s=s+r;
x=x/10;
}
return (s);
}