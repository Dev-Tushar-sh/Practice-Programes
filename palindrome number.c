#include<stdio.h>
#include<conio.h>
void main()
{
    int x,r,temp,sum=0;
    printf("Enter the Number");
    scanf("%d",&x);
    temp=x;
  while(x>0)
  {
    r=x%10;
    sum=sum*10+r;
    x=x/10;
  }
  x=temp;
  if(sum==x)
    printf("Number is palindrome");
  else
    printf("Number is not a palindrome Number");
    getch();
}
