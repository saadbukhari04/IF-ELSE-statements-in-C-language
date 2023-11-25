#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(0)); 
	int num1,num2,num3,num4;
    num1 = (rand() % 5) + 1;
    num2 = (rand() % 5) + 1;
    num3 = (rand() % 5) + 1;
    num4 = (rand() % 5) + 1;

    printf("Generated Numbers: %d %d %d %d\n", num1, num2, num3, num4);

    if (num1 == num2 && num2 == num3 && num3 == num4) 
	
        printf("All are the same\n");
	 
	else if (num1 == num2 && num2 == num3 || num1 == num2 && num2 == num4 || num1 == num3 && num3 == num4 || num2 == num3 && num3 == num4) 
	 
        printf("Three are the same, and one is different\n");
		
        
	else if (num1 == num2 || num1 == num3 || num1 == num4 || num2 == num3 || num2 == num4 || num3 == num4) 
        printf("Two are the same, and two are different\n");
    
	else 
       	printf("All are different\n");
    

    return 0;
}





