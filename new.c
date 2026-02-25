#include<stdio.h>
void main()
{
    int num[5],i,tot=0,avg=0;
    printf("enter any five numbers");
    for(i=0;i<5;i++)
   {
     scanf("%d",&num[i]);
     tot+=num[i];
   }
    printf("the total is %d",tot);
    avg=tot/5;
    printf("the average is %d",avg);
}