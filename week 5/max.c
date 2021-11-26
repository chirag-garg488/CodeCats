#include <stdio.h>
void getMax(int *a, int *b, int *max)
{
    if (*a > *b)
        *max = *a;
    else
        *max = *b;
}
int main()
{
    int a, b, max;
    printf("Enter the numbers ");
    scanf("%d %d", &a, &b);
    getMax(&a, &b, &max);
    printf("%d ", max);
    return 0;
}
