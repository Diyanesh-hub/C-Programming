//Name:Diyanesh M S
//Roll No: CH.EN.U4CYS21015
#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,s=0,i=0,t;
	printf("Enter the number: ");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		r=n%10;
		s=r+(s*10);
		n=n/10;
		i++;
	}
	if(s==t)
	{
		printf("Original number and reversed number are equal");
	}
	else
	{
		printf("Original number and reversed number are not equal");
	}
	return 0;
}
