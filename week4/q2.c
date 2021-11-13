
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
void count(int* ar, int n)
{
    int* a = (int*)calloc(n, sizeof(int));
 
    for (int i = 0; i < n; i++) {
 
        // Skip this element if already processed
        if (a[i] == 1)
            continue;
 
        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (ar[i] == ar[j]) {
                a[j] = 1;
                count++;
            }
        }
        printf("%d - %d \n",ar[i],count);
        
    }
    free(a);
}
void check(int* ar, int n,int k)
{
    for (int i = 0; i < n; i++)
    {
        if(ar[i]==k)
        {
            printf("Availibility status: True");
            exit(0);
        }
    }
    printf("Availibility status: True");

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
        count(ar,n);
        int k;
        printf("Enter the element to be searched");
        scanf("%d", &k);
        check(ar,n,k);
        free(ar);//free the memory

    }
 
    return 0;
}
