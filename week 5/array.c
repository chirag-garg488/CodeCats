#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the size of array ");
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));
    printf("Enter the elements ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
    //printing array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }
    return 0;
}
