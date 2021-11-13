#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int T,x,n;
    printf("Enter value of T:");
	scanf("%d",&T);
	for(int k=0;k<T;k++)
	{
        printf("Enter value of x:");
	    scanf("%d",&x);
        int res=x;
        printf("Enter value of n:");
	    scanf("%d",&n);
	    if(abs(x)%2==1)//for odd values and abs for negative values
        {
            if(n%2==1)//if the number of jumps are odd
            {
               
                int i=((n-1)/2)%2;
                if(i==1)//if half of number of jumps is odd
                {
                   res= res-1-n;
                }
                else
                res=res+n;
                
            }
            else
            {
             int i=((n)/2)%2;
                if(i==1)//if half of number of jumps is odd
                {
                   res= res-1;
                }   
                
            }
        }
        else
        {
            if(n%2==1)
            {
                int i=((n-1)/2)%2;
                if(i==1)//if half of number of jumps is odd
                {
                   res= res+1+n;
                }
                else
                res=res-n;
                
            }
            else
            {
                int i=((n)/2)%2;
                //printf("%d",i);
                if(i==1)//if half of number of jumps is odd
                {
                   res= res+1;
                }   
            }
        }

        printf("output : %d\n",res);
	}
	return 0;
}