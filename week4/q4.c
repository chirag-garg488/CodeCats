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
void find(int *ar , int n,int k)
{ 
    int i=0;
    int j=n-1;
    while (i<j)
    {
        if ((ar[i]+ar[j])>k)
            j--;
        if ((ar[i]+ar[j])<k)
            i++;
        if ((ar[i]+ar[j])==k)
          {  printf("[%d,%d]",i,j);
            break;
          }

    }
    
}

int main()
{
 
    int* ar;//base address pointer
    int n,k=0, i,s=0;

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
        printf("Enter the target: ");
        scanf("%d",&k);
        find(ar,n,k);
        free(ar);//free the memory

    }
 
    return 0;
}