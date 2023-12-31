//Name:Diyanesh M S
//Roll No: CH.EN.U4CYS21015
#include<Stdio.h>
int main()
{
	int amt,t=0;
	printf("Enter the amount: ");
	scanf("%d",&amt);
	if(amt>=100)
	{
		t=amt/100;
		amt=amt%100;
	}
	if(amt>=50)
	{
		t+=amt/50;
		amt=amt%50;
	}
	if(amt>=10)
	{
		t+=amt/10;
		amt=amt%10;
	}
	if(amt>=5)
	{
		t+=amt/5;
		amt=amt%5;
	}
	if(amt>=2)
	{
		t+=amt/2;
		amt=amt%2;
	}
	if(amt>=1)
	{
		t+=amt/1;
		amt=amt%1;
	}
	printf("\n Total number of notes: %d", t);
	return 0;
}
