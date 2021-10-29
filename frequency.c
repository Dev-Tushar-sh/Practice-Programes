#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i=0;
    int n=0;
    printf("Enter the list of numbers :\n");
    while(i<10)
    {
        scanf("%d",&a[i]);
        i++;
    }

     for(int j=0;j<10;j++)
     {

         for(int k=0;k<=10;k++)
         {
         if(a[j]==a[k])
         {
            n++;
         }
        else
          printf("");
        }
        printf("%d is in the list %d times \n",a[j],n);
        n=0;
     }

}
