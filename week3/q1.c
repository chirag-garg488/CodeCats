#include <stdio.h>
void q1(int n){
    for(int i=1; i<=n; i++)
    {
        int j =0;
        while(j<i)
        {
            printf("* ");
            j++;
        }
        printf("\n");
    }
}
int main(){
    
    printf("Enter the Number of lines:");
    int n;
    scanf("%d",&n);
    q1(n);
    return 0;
}