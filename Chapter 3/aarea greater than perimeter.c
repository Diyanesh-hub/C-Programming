//Name:Diyanesh M S
//Roll No: CH.EN.U4CYS21015
#include<stdio.h>
int main()
{
	float l,b;
	printf("Enter the length of rectangle: ");
	scanf("%f",&l);
	printf("Enter the breadth of rectangle: ");
	scanf("%f",&b);
	if(l*b>2*(l+b))
	{
		printf("area of the rectangle is greater than its perimeter");
	}
	else
	{
		printf("area of the rectangle is not greater than its perimeter");
	}
	
	return 0;
}

