//Write a C program to check whether a number is Strong number or not.
#include<stdio.h>

int main(){
    int n,i,last,orignal,sum=0;
     long int fact=1;
    printf("Enter the no: ");
    scanf("%d",&n);
    orignal=n;
    //finding the sum of factorial of digits
    while(n>0)
    {
    last=n%10;
//finding the factorial of the digit
fact=1;
for ( i=1; i<=last; i++)
{
    fact=fact*i;
}
//adding factorial to sum
 
sum=sum+fact;
n=n/10;
    }
   
    if(sum==orignal)
{
        printf("%d is a STRONG NUMBER", orignal);
    }
    else
    {
        printf("%d is NOT a STRONG NUMBER", orignal);
    }

    return 0;
}