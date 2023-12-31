//Name:Diyanesh M S
//Roll No: CH.EN.U4CYS21015
#include<stdio.h>
#include<math.h>
int main()
{
	float x, y, r,t;
	printf("Enter the x coordinates : ");
	scanf("%f", &x);
	printf("Enter the y coordinates : ");
	scanf("%f",&y);
	r=sqrt(x*x+y*y);
	t= atan(y/x);
	printf("\nCoordinates in polar form : %.2f(cos(%.2f) + i.sin(%.2f))", r,t,t);
	return 0;
}
