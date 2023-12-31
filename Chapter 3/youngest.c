//Name:Diyanesh M S
//Roll No: CH.EN.U4CYS21015
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter the age of ram: ");
	scanf("%d",&a);
	printf("Enter the age of shyam: ");
	scanf("%d",&b);
	printf("Enter the age of ajay: ");
	scanf("%d",&c);
	if(a<b&&a<c)
	{
		printf("Ram is youngest");
	}
	else if(b<c)
	{
		printf("Shyam is youngest");
	}
	else
	{
		printf("Ajay is youngest");
	}
	return 0;
}
