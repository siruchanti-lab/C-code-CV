#include<stdio.h>
void main()
{
    char name[5][6];int i;
    printf("enter any five names");
    for(i=0;i<5;i++)
    gets(name[i]);
    for(i=0;i<5;i++)
    puts(name[i]);
}