#include<stdio.h>
#include<math.h>
void main()
{
int n[5];
printf("Enter 5 numbers:");
for(int i=0;i<5;i++)
{
scanf("%d",&n[i]);
}
printf("The squares of the numbers are:\n");
for(int i=0;i<5;i++)
{
printf("%f ",pow(n[i],2));
}
printf("\nThe square roots of the numbers are:\n");
for(int i=0;i<5;i++)
{
printf("%f ",sqrt(n[i]));
}
}