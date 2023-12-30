//Name:Diyanesh M S
//Roll No: CH.EN.U4CYS21015
#include<stdio.h>
int main()
{
	float l,b,r;
	printf("Enter the length of rectangle: ");
	scanf("%f",&l);
	printf("Enter the breadth of rectangle: ");
	scanf("%f",&b);
	printf("Enter the radius of circle: ");
	scanf("%f",&r);
	printf("\nArea of rectangle: %.2f\n",l*b);
	printf("Perimeter of rectangle: %.2f\n",2*(l+b));
	printf("Area of circle: %.2f\n",3.14*r*r);
	printf("circumference of circle: %.2f\n",2*3.14*r);
	return 0;
}

