#include <stdio.h>
int main()
 {
    int i,c;
    printf("Enter the numbers: ");
    scanf("%d", &c);
    for(i=1;i<=c;i++)
    {
	 printf("Number is : %d and cube of the %d is :%d \n",i,i, (i*i*i));     
    }
 }
