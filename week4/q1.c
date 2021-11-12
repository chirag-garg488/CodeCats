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
void rev(int *ar , int n)
{ 
    for (int i = 0; i <n/2; i++)
    {
        int temp = ar[i];
        ar[i]=ar[n-i-1];
        ar[n-1-i]= temp;
    
    }
    
}
void display(int *ar , int n)
{
    printf("The elements of the array after reversing are: ");
    printf("%d ", ar[0]);//to remove one extra comma
    for (int i = 1; i < n; ++i)
    {
        printf(",%d ", ar[i]);
    }
    
}
int main()
{
 
    int* ar;//base address pointer
    int n, i,s=0;

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
        rev(ar,n);
        display(ar,n);
        free(ar);//free the memory

    }
 
    return 0;
}