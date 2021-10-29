#include<stdio.h>
#include<string.h>
main()
{
    int i;
    char s[100];
    printf("Enter string ");
    gets(s);
    puts(s);
    for(i=0;s[i]!='\0';i++);

    printf("length of string is %d",i);
}
