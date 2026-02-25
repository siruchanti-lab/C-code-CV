#include<stdio.h.>
void add(int x, int y)
{
    printf("The sum is %d",x+y);
}
void difference(int x, int y)
{
    printf("The difference is %d",x-y);
}
void product(int x, int y)
{
    printf("the product is %d",x*y);
}
void main()
{
    int a,b,choice;
    printf("enter the choice")
    scanf("%d",&choice);
    switch(choice)
    {
        case choice=1:
        add(a,b);
        break;
        case choice=2:
        difference(a,b);
        break;
        case choice=3;
        product(a,b);
        break;    
    }
}