#include<stdio.h>
//Program to calculate a student's Percentage and Grade them accordingly
int main ()
{
float p, m, c, b, e,t,per;
char g;
    printf("Enter marks in Maths: ");
    scanf("%f",&m);
    
    printf("Enter marks in Physics: ");
    scanf("%f",&p);
    
    printf("Enter marks in Chemistry: ");
    scanf("%f",&c);
    
    printf("Enter marks in Biology: ");
    scanf("%f",&b);
    
    printf("Enter marks in English: ");
    scanf("%f",&e);
    
    t=m+p+c+b+e;
    per=t/500*100;
    
if (per>=90)
  g = 'A';
if (per<90;per>=80)
  g = 'B';
if (per<80;per>=70)
  g = 'C' ;
if (per<70;per>=60)
  g = 'D';
if (per<60;per>=50)
g = 'E';
if (per<50)
g = 'F';

printf("Your percentage is %f and your grade is %c",per,g);
}
    
