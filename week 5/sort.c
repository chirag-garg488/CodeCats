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
    //sorting
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(a + i) > *(a + j))
            {
                int temp = *(a + j);

                *(a + j) = *(a + i);
                *(a + i) = temp;
            }
        }
    }
    //printing
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }
    return 0;
}
