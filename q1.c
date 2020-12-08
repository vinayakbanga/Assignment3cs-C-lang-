//Write a C program to find power of a number using for loop.
#include<stdio.h>
#include<math.h>
int main(){
    int n,i,power,result;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("Enter the power :");
    scanf("%d",&power);

    for ( i = 0; i < n; i++)

    {
        result=pow(n,power);
       
    }
     printf("%d^%d=%d\n",n,power,result);
     return 0;
}