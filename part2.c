#include<stdio.h>
int main(){
	int num, temp, digit,reverse = 0;
	printf("Enter a 4-digit number: ");
	scanf("%d", &num);
	temp = num;
	while (temp > 0){
		digit = temp % 10;
		reverse = (reverse* 10)+ digit;
		temp /= 10;
	}
	printf("Reverse of %d is %D\n", num,reverse);
	if(num == reverse){
		printf("%d is a palindrome number",num);
	}else{
		printf("%d is not a palindrome number",num);
	}
}
