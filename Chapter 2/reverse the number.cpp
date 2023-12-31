//Name:Diyanesh M S
//Roll No: CH.EN.U4CYS21015
#include<stdio.h>
int main()
{
	int n,r,s=0;
	printf("Enter the five digit number: ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("sum of the number: %d",s);
	return 0;
}

