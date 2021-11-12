#include <stdio.h>
#include <stdlib.h>

void data(int *ar , int n)
{
    printf("Input %d elements in the array from 0,1,2 :\n",n);
 
        // Get the elements of the array
        for (int i = 0; i < n; ++i) 
        {
            printf("element - %d :",i);
            scanf("%d",&ar[i]);
            
        }
       
}
void modify(int *ar , int n)
{ 
    int count=0, count_1=0;
    for (int i = 0; i < n; i++)
    {
        if(ar[i]==0)
            count++;
        if(ar[i]==1)
            count_1++;
    }
    for (int i = 0; i < count; i++)
    {
        ar[i]=0;
    }
    
    for (int i = count; i < count+count_1; i++)
    {
        ar[i]=1;
    }
    for (int i = count+count_1; i < n; i++)
    {
        ar[i]=2;
    }
    
    
}
void display(int *ar , int n)
{
    printf("The elements of the array after modification: ");
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
        modify(ar,n);
        display(ar,n);
        free(ar);//free the memory

    }
 
    return 0;
}