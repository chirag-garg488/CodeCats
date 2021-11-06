#include <stdio.h>
#include <stdlib.h>

void data(int *ar , int n)
{
    printf("Input %d elements in the array :\n",n);
 
        // Get the elements of the array
        for (int i = 0; i < n; ++i) 
        {
            printf("element - %d :",i);
            scanf("%d",&ar[i]);
            
        }
}
void display(int *ar , int n)
{
    printf("The elements of the array are: ");
    printf("%d ", ar[0]);//to remove one extra comma
    for (int i = 1; i < n; ++i)
    {
        printf(",%d ", ar[i]);
    }
    
}

void output(int *a , int n)
{
    int s_all=0;
    int s_even=0;
    int s_odd=0;
    int s_even_p=0;
    int s_odd_p=0;
    for (int i = 0; i < n; ++i)
    {
        s_all=s_all+a[i];
        if (a[i]%2==0)
            s_even=s_even+a[i];
        else
            s_odd=s_odd+a[i];

        if (i%2==0)
            s_even_p=s_even_p+a[i];
        else
            s_odd_p=s_odd_p+a[i];
    }
    printf("\n%d %d %d %d %d ",s_all,s_even,s_odd,s_even_p,s_odd_p);
    
}
int main()
{
 
    int* ar;//base address pointer
    int n, i;

    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);
 
    //Alloting memory
    ar = (int*)malloc(n * sizeof(int));

    if (ar == NULL)
    {
        printf("Memory not allocated.\n");
    }
    else 
    {   
        data(ar,n);
        display(ar,n);
        output(ar,n);
        free(ar);//free the memory
    }
 
    return 0;
}