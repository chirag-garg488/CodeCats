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
void rotate(int *ar , int n,int k)
{ 
    int r=n-(k%n);
    //printf("%d",r);
    int* a;
    a = (int*)malloc(n * sizeof(int));
    int temp;
    
    for (int i = 0; i <n; i++)
    {
        if ((i+r)<n)
        {
            a[i]= ar[i+r];
            //printf("\n %d",ar[i+r]);
        }
        else
        {
            temp=((i+r)%n); 
            a[i]= ar[temp];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        ar[i]= a[i];
    }
    free(a);
}
void display(int *ar , int n)
{
    printf("The elements of the array after rotating are: ");
    printf("%d ", ar[0]);//to remove one extra comma
    for (int i = 1; i < n; ++i)
    {
        printf(",%d ", ar[i]);
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
        printf("Enter the number of steps for rotation");
        scanf("%d",&k);
        rotate(ar,n,k);
        display(ar,n);
        free(ar);//free the memory

    }
 
    return 0;
}