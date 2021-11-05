#include <stdio.h>
void q3(int n){
    for(int i=0; i<n; i++)
    {
        int j =n;
        while(j>i)
        {
            printf("  ");
            j--;
        }
        
        for (int k = 0; k < 2*i+1; k++)
        {
            printf("* ");
        }
        
        
        printf("\n");
    }
}
int main(){
    
    printf("Enter the Number of lines:");
    int n;
    scanf("%d",&n);
    q3(n);
    return 0;
}