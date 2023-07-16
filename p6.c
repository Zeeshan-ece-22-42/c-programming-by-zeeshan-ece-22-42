#include <stdio.h>
int main()
{
   int q,p;
   printf("Input the number : ");
   scanf("%d",&p);
   printf("multiplication for %d is:\p", p);
   for(q=1;q<=10;q++)
   {
     printf("%d X %d = %d \n",p,q,p*q);
   }
}
