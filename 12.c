#include <stdio.h>

int main() {
    float principal, rate, amount;
	printf("Enter the Amount Deposited: ");
    scanf("%f", &principal);
	if (principal <= 500000) {
	rate = 0.07; 
    } 
		else {
        	rate = 0.10; 
    }
	int year;
    for (year = 1; year <= 3; year++) {
        amount = principal * (1 + rate); 
        printf("Amount after year %d = %f\n", year, amount);
        principal = amount; 
    }
	return 0;}

