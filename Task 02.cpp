#include <stdio.h>
int main(){
		//TASK 01
	 int centigrade,farhenheit;
	 printf("Centigrade = ");
	 scanf("%d", &centigrade);
	 farhenheit= centigrade*9/5+32;
	 printf("Farhenheit =%d\n", farhenheit);
	
//Task 02
	int side1,side2,side3,side4,side5,perimeter;
	printf("Side 1 = ");
	scanf("%d", &side1);
	printf("Side 2 = ");
	scanf("%d", &side2);
	printf("Side 3 = ");
	scanf("%d", &side3);
	printf("Side 4 = ");
	scanf("%d", &side4);
	printf("Side 5 = ");
	scanf("%d", &side5);
	perimeter=side1+side2+side3+side4+side5;
	printf("Perimeter =%d\n", perimeter);
	//Task 03
	int x1,x2,answer;
	printf("Enter X1 :");
	scanf("%d", &x1);
	printf("Enter X2 :");
	scanf("%d", &x2);
	answer= x1*x1 + x2*x2 +2*x1*x2;
	printf("Answer =%d\n", answer);
	answer= x1*x1 + 1/(x2*x2) -2;
	printf("Answer =%d\n", answer);
	answer= (x1+x2)*(x1-x2);
	printf("Answer =%d\n", answer);
	//Task 04
	char c1='F',c2='C', c3='I';
	printf("Difference between %c and %c is: %d\n", c1,c2,c1-c2);
	printf("Difference between %c and %c is: %d\n", c2,c3,c2-c3);
	printf("Difference between %c and %c is: %d\n", c3,c1,c3-c1);
	
	
	
	return 0;
}
