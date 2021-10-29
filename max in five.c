#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,l,m;
     printf("enter five value");
     scanf("%d %d %d %d %d",&i,&j,&k,&l,&m);

     if(i>j)
        if(i>k)
          if(i>l)
            if(i>m)
              printf("%d sabse bada hai",i);
              else
                printf("%d sabse bada hai",m);
           else
              if(l>m)
                printf("%d sabse bada hai",l);
                else
                printf("%d sabse bada hai",m);
        else
            if(k>l)
                if(k>m)
                 printf("%d sabse bada hai",k);
                else
                 printf("%d sabse bada hai",m);
            else
               if(l>m)
                printf("%d sabse bada hai",m);
               else
                printf("%d sabse bada hai",l);
    else
       if(j>k)
         if(j>l)
           if(j>m)
             printf("%d sabse bada hai",j);
            else
             printf("%d sabse bada hai",m);
         else
            if(l>m)
              printf("%d sabse bada hai",l);
            else
              printf("%d sabse bada hai",m);
      else
        if(k>l)
          if(k>m)
           printf("%d sabse bada hai",k);
          else
            printf("%d sabse bada hai",m);
        else
          if(l>m)
            printf("%d sabse bada hai",l);
        else
            printf("%d sabse bada hai",m);
}
