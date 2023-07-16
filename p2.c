#include <stdio.h>
int main()
{
    int  a, sum = 0;

    printf("The first 10 natural number is :\n");
 
    for (a = 1; a <= 10; a++)
    {
        sum = sum + a;
        printf("%d ",a);    
    }
    printf("The Sum is : %d\n", sum);
}
