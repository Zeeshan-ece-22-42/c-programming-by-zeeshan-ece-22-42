#include <stdio.h>
int main()
{       
    int i, n = 10, sum = 0;
	float avg;
	int number[n];
	printf("Enter %d numbers:\n", n);
	for (i=1;i<=10;i++)
	{
                printf("Number-%d :",i);

		scanf("%d",&n);
		sum +=n;
	}
	avg=sum/10.0;
	printf("The sum of 10 no is : %d\nThe Average is : %f\n",sum,avg);
 
}
