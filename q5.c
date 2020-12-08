//Write a C program to find all prime factors of a number.
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("All Prime Factors of %d are: \n", n);
    for ( i = 2; i <= n/2; i++)
    {
        if(n%i==0)// this is done to find factor
        {
            //check for prime no
            for(j=2;j<=i;j++)
    {
       if(i%j == 0) {
      // printf("The No. is composite");
       break; 
       }
    }

 if (j==i)
{
    printf("%d ",i);
}
}
        }
        return 0;
    }
    
