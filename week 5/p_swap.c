#include <stdio.h>
void swap(int **a, int **b)
{
    int *temp = *a;
    *a = *b;
    *b = temp;   
}
int main()
{
    int a, b;
    printf("Enter the numbers");
    scanf("%d %d", &a, &b);
    int *ptr, *ptr2;
    ptr = &a;
    ptr2= &b;

    swap(&ptr, &ptr2);
    printf("%d %d", *ptr, *ptr2);
    return 0;
}
