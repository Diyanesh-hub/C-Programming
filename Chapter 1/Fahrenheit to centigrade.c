//Name:Diyanesh M S
//Roll No: CH.EN.U4CYS21015
#include<stdio.h>
int main()
{
	float far,cel;
	printf("Enter the temperature of city in fahrenheit degrees: ");
	scanf("%f",&far);
	cel=((far-32)*5)/9;
	printf("temperature of city in Centigrade degrees: %.2f",cel);
	return 0;
}
