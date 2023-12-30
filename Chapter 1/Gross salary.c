//Name:Diyanesh M S
//Roll No: CH.EN.U4CYS21015
#include<stdio.h>
int main()
{
	int sal;
	float gs;
	printf("Enter the salary amount: ");
	scanf("%d",&sal);
	gs=sal+(0.4*sal)+(0.2*sal);
	printf("Gross salary: %.2f",gs);
	return 0;
}
