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
void maxmin(int *ar , int n)
{ 
    int mx=ar[0];
    int mn=ar[0];
    
    
    printf("The elements of the array are: ");
    printf("%d ", ar[0]);//to remove one extra comma
    for (int i = 1; i < n; ++i)
    {
        if (mx<ar[i])
        {   
            mx=ar[i];
        }

        if (mn>ar[i])
        {
            mn=ar[i];
        }
        printf(",%d ", ar[i]);
    }
    
    int mx_2=mn;
    int mn_2=mx;
    
    for (int i = 1; i < n; i++)
    {
        if (mx_2<ar[i] && ar[i]!= mx)
        {   
            mx_2=ar[i];
        }

        if (mn_2>ar[i] && ar[i]!=mn)
        {
            mn_2=ar[i];
        }
    }
        
    
    printf("\nmax value is : %d",mx);
    printf("\nmin value is : %d",mn);
    printf("\nSecond max value is : %d",mx_2);
    printf("\nSecond min value is : %d",mn_2);
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
        maxmin(ar,n);
        free(ar);//free the memory
    }
 
    return 0;
}