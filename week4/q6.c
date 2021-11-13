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
void search(int *ar , int n,int k)
{ 
    int l=0, h=n-1;
    int mid = (l+h)/2;
    while (l!=mid)
    {
        if(ar[mid]>k)
        {
            h=mid;
            mid = (l+h)/2;
        }
        if(ar[mid]<k)
        {
            l=mid;
            mid = (l+h)/2;
        }
        else 
        {
            printf("The element is present at index %d", mid);
            exit(0);
        }
    }
    printf("the elements expected position is %d", h);

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
        printf("Enter the number searched :");
        scanf("%d",&k);
        search(ar,n,k);
        free(ar);//free the memory

    }
 
    return 0;
}