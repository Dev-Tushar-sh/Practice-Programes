#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,c=1;
    printf("Enter any Number-");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
        c=c*i;

   printf("%d",c);
    getch();
}
