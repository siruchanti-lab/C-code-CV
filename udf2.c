#include <stdio.h>

void pattern(int rows) 
{
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() 
{
    int n;
    printf("Enter the number of rows: ");
    if (scanf("%d", &n) == 1) 
    {
        pattern(n);
    }
    return 0;
}
