//Name:Diyanesh M S
//Roll No: CH.EN.U4CYS21015
#include<stdio.h>
int main()
{
	float dis;
	printf("Enter the distance(in km) between two cities: ");
	scanf("%f",&dis);
	printf("Conversion:\n");
	printf("Meter: %.2f\n",1000*dis);
	printf("feet: %.2f\n",3280.83*dis);
	printf("inches: %.2f\n",39370.07*dis);
	printf("centimeters: %.2f\n",100000*dis);
	return 0;
}
