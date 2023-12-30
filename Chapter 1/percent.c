//Name:Diyanesh M S
//Roll No: CH.EN.U4CYS21015
#include<stdio.h>
int main()
{
	float per;
	int i,arr[5],total=0;
	printf("Maximum mark in each subject is 100\n");
	for(i=0;i<5;i++)
	{
		printf("Enter the mark in subject %d :",i+1);
		scanf("%d",&arr[i]);
		total+=arr[i];
	}
	per=total/5;
	printf("Total mark: %d\n",total);
	printf("percentage: %.2f\n",per);
	return 0;
}
