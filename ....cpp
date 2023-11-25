#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter Three numbers : ");
	scanf("%d",&a);
	printf("                      ");
	scanf("%d",&b);
	printf("                      ");
	scanf("%d",&c);
	if (a>=b && a>=c)
		{ 	printf("The Largest Number = %d\n",a);
		if(b>=c)
			{
			printf("The Second Largest Number = %d\n",b);
			printf("The Third Largest Number = %d\n",c);}
		else
			{
			printf("The Second Largest Number = %d\n",c);
			printf("The Third Largest Number = %d\n",b);}
		}
	else if(b>=a && b>=c)
		{	printf("The Largest Number = %d\n",b);
		if(a>=c)
			{
			printf("The Second Largest Number = %d\n",a);
			printf("The Third Largest Number = %d\n",c);}
		else
			{
			printf("The Second Largest Number = %d\n",c);
			printf("The Third Largest Number = %d\n",a);}
		}
	else {
			printf("The Largest Number = %d\n",c);
		if(a>=b)
			{
			printf("The Second Largest Number = %d\n",a);
			printf("The Third Largest Number = %d\n",b);}
		else
			{
			printf("The Second Largest Number = %d\n",b);
			printf("The Third Largest Number = %d\n",a);}
	}
	return 0;
}
