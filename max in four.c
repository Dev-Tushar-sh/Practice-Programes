#include<stdio.h>
#include<conio.h>
void main()
{

    int i,j,k,l;

    printf("Enter the value of i,j,k,l");
     scanf("%d %d %d %d",&i,&j,&k,&l);
    if(i>j)
         if(i>k)
             if(i>l)
                 printf("%d",i);
              else
                printf("%d",l);
          else
                if(k>l)
                printf("%d",k);
                else
                printf("%d",l);
    else
        if(j>k)
           if(j>l)
             printf("%d",j);
           else
                printf("%d",l);
         else
             if(k>l)
                printf("%d",k);
             else
                printf("%d",l);

}
