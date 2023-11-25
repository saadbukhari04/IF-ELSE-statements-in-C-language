#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main(){
 	srand(time(0));
 	int x,y,z,s,d,p,s1,p1,d1;
 	x = rand() % 9+1;
 	y = rand() % 9+1;
 	z = rand() % 3+1;
 	s1 = x+y;
 	p1 = x*y;
 	d1 = x-y;
 	printf("\t%d\t%d\n",x,y);
 	if (z==1)
 		{
		 {	printf("Enter Sum = ");
 			scanf("%d", &s);}
			 	if (s==s1)
				 printf("Correct");
				else 
					printf("Incorrect");}
 	else if (z==2)
 		{
		 {	printf("Enter Difference = ");
 			scanf("%d", &d);}
			 	if (d==d1)
				 printf("Correct");
				else 
					printf("Incorrect");}
 	else 
 		{
		 {	printf("Enter Product = ");
 			scanf("%d", &p);} 
			 if (p==p1)
				 printf("Correct");
				else 
					printf("Incorrect");}
 	return 0;
 }
 	
