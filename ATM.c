#include<conio.h>
#include<stdio.h>
main()
{
    int c,amount,b,v,m,u,t,y;
    printf("Enter the amount\n(should be multiple of 100) : ");
    scanf("%d",&amount);
    tushar :
    if(amount<500)
    {

        c=amount/100;
        printf("%d notes of Hundred",c);
    }
    else
    {
        if(amount==500)
        {
        printf("  1 note of Five Hundred");
        }
        else
        {//500 se bada amount
           if(amount%500==0&&amount<2000)
             {
                 b=amount/500;
                 printf("  %d Notes of Five Hundred",b);
             }
            else
                {
                    if(amount<2000)
                    {
                    v=amount/500;
                    m=amount-v*500;
                    m=m/100;
                    printf("  %d notes of 500,\n  %d Notes of 100",v,m);
                    }
                else
                {
                    if(amount==2000)
                    {
                        printf("1 Note of 2000");
                    }
                    else//2000 se bada
                    {
                        if(amount%2000==0)
                        {
                        t=amount/2000;
                        printf("%d notes of 2000",t);
                        }
                    else
                    {

                        u=amount/2000;
                        y=amount-u*2000;

                        printf("  %d notes of 2000\n",u);
                        amount=y;
                        goto tushar;
                    }

                    }
                }
                }
        }
    }
getch();
printf("\n");
printf("hamari atm seva use krne k liye dhanyavad!!!!\n");
getch();
printf("aapka din shub ho......");
getch();
}
