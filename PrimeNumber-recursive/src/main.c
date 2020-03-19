#include <stdio.h>

int number;
int check;

int verify_prime(int number_to_verify)
{
	if(check == 1)
	{
		return 1;
	}
	else
	{
		if(number_to_verify % check == 0)
		{
			return 0;
		}
		else
		{
			check = check - 1;
			verify_prime(number_to_verify);
		}
		
	}
	
}

int main() {
	printf("Write the number you want to verify: ");
	scanf("%d", &number);

	check = number / 2;

	int result = verify_prime(number);

	if(result == 1)
	{
		printf("%d is a prime number", number);
	}	
	else
	{
		printf("%d is not a prime number", number);
	}
	
	return(0);
}