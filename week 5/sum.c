#include <stdio.h>
int sum(int *a, int *b)
{
    return *a + *b;
}
int main()
{
    int a, b;
    printf("Enter the numbers ");
    scanf("%d %d", &a, &b);
    printf("sum : %d ", sum(&a, &b));
    return 0;
}
