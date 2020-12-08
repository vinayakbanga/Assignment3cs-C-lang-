//10. Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following: 
/*Percentage >= 90% : Grade A 
Percentage >= 80% : Grade B 
Percentage >= 70% : Grade C 
Percentage >= 60% : Grade D 
Percentage >= 40% : Grade E 
Percentage < 40% : Grade F*/
#include<stdio.h>
int main(){
    int phy,chem,bio,maths,comp,total;
    float percentage;
    char grade;
    printf("Enter the marks in\n Physics:\n Chemistry:\n Biology\n Mathematics\n Computer\n");
    scanf("%d%d%d%d%d",&phy,&chem,&bio,&maths,&comp);
    total=phy+chem+bio+maths+comp;
    percentage=(float)total/5;
    printf("%.2f",percentage);
    if(percentage>=90)
    {
     grade='A';
    }
    else  if(percentage>=80)
    {
     grade='B';
    }
    else  if(percentage>=70)
    {
     grade='C';
    }
    else  if(percentage>=60)
    {
     grade='D';
    }
    else  if(percentage>=40)
    {
     grade='E';
    }
    else  if(percentage<40)
    {
     grade='F';
    }
    printf("\n Grade=%c",grade);
    return 0;
    
}