#include <stdio.h>
void q4(int n){
        int l =0;
        int r= n-1;

        while(l<(n+1)/2)
        {
           for (int k = 0; k < n; k++)
           {
               if(k==l || k==r)
               printf("*");
               else
               printf(" ");
           }
           
           l++;
           r--;
           printf("\n");

        }
        l--;
        r++;//reducing both values to reach centre where l and r equal
        while(l!=0)
        {
           l--;//reduing first to stop printing single star again
           r++;
           for (int k = 0; k < n; k++)
           {
               if(k==l || k==r)
               printf("*");
               else
               printf(" ");
           }
           
           
           printf("\n");

        }
        
        
        
    
}
int main(){
    
    printf("Please enter odd Number of lines:");
    int n;
    scanf("%d",&n);
    if (n%2==1)
    {
        q4(n);
    }
    else
    {
        printf("Even value entered");
      
    }
    
    
    return 0;
}