//Write a C program to print all Strong numbers between 1 to n.
#include<stdio.h>
int main(){
    int n,i,j,current,sum,fact,last;
    printf("Enter the No till which you want STRONG NUMBER: ");
    scanf("%d",&n);
     printf("All Strong numbers between 1 to %d are:\n", n);
    
    /* Iterate from 1 to end */
    for(i=1; i<=n; i++)
    {
        /* Number to check for strong number */
        current = i;

        sum = 0;

        /* Find the sum of factorial of digits */ 
        while(current > 0)
        {
            fact = 1;
            last = current % 10;

            /* Find factorial of last digit of current num. */
            for( j=1; j<=last; j++)
            {
                fact = fact * j;
            }

            sum += fact; 

            current /= 10;
        }
        
        /* Print 'i' if it is strong number */  
        if(sum == i)
        {
            printf("%d, ", i);
        }
    }

    return 0;

}















