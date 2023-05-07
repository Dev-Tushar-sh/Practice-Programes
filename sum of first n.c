#include<stdio.h>
void main()
{
    int n,i,c=0;
    printf("Enter how many natural number");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
       c=c+i;
    }
    printf("%d",c);
}
