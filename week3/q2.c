#include <stdio.h>
void q2(int n){
    for(int i=0; i<n; i++)
    {
        int j =n;
        while(j>i)
        {
            printf("* ");
            j--;
        }
        printf("\n");
    }
}
int main(){
    
    printf("Enter the Number of lines:");
    int n;
    scanf("%d",&n);
    q2(n);
    return 0;
}