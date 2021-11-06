#include <stdio.h>
#include <stdlib.h>

int data(int *ar , int n, int s)
{
    printf("Input %d elements in the array :\n",n);
 
        // Get the elements of the array
        for (int i = 0; i < n; ++i) 
        {
            printf("element - %d :",i);
            scanf("%d",&ar[i]);
            
        }
    printf("Enter the element to be searched in the array :\n");
    scanf("%d", &s);
    return s;//returning value of element to be searched
}
void count(int *ar , int n,int s)
{ 
    int c=0;
    printf("The elements of the array are: ");
    printf("%d ", ar[0]);//to remove one extra comma
    if (ar[0]==s)
        c++;
    for (int i = 1; i < n; ++i)
    {
        if (ar[i]==s)
        c++;
        
        printf(",%d ", ar[i]);
    }
  //  printf("\n%d",s);
    printf("\nNo. of occurences is/are : %d",c);
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
       s= data(ar,n,s);
        count(ar,n,s);
        free(ar);//free the memory
    }
 
    return 0;
}