//Name:Diyanesh M S
//Roll No:CH.EN.U4CYS21015
#include<stdio.h>
int main()
{
	float b,s;
	printf("Enter the buying cost: ");
	scanf("%f",&b);
	printf("Enter the selling cost: ");
	scanf("%f",&s);
	if(b<s)
	{
		printf("profit\n");
		printf("profit is %.2f rupees",s-b);
	}
	else
	{
		printf("loss\n");
		printf("loss is %.2f rupees",s-b);
	}
	return 0;
}
