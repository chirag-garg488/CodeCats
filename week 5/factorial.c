#include <stdio.h>
int main()
{
    int num, *fact;
    *fact = 1;
    printf("Enter the number ");
    scanf("%d", &num);
    for (int i = 2; i <= num; i++)
    {
        (*fact) *= i;
    }
    printf("%d", *fact);
    return 0;
}
