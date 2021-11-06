#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int T,G,I,N,Q,i,j,res;
    printf("Enter value of T:");
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
        printf("Enter value of G:");
	    scanf("%d",&G);
	    for(j=1;j<=G;j++)
	    {
            printf("Enter value of I:");
	        scanf("%d",&I);
            printf("Enter value of N:");
	        scanf("%d",&N);
            printf("Enter value of Q:");
	        scanf("%d",&Q);
            if(I>2 || I<1 || Q>2 || Q<1)
            {
                printf("Invalid value for I or Q");
                exit(0);
            }
	      //  printf("Inq %d%d%d",I,N,Q);
            if(I==Q){
                if(N%2==1)
                res= (N-1)/2;
                else
                res= (N)/2;
            }
            
            else
            {
                if(N%2==1)
                res= (N+1)/2;
                else
                res= (N)/2;
            }
            
        printf("Output:%d\n",res);
	    }
	}
	return 0;
}