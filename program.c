#include<stdio.h>
void main()
{
    char a[100],c;
    int i=0;
    while((c=getchar())!='\n')
    {
        scanf("%c",&a[i++]);
        c=getchar();
     }
     for(i=1;i<11;i++)
        printf("%c%c ",a[0],a[i]);
}