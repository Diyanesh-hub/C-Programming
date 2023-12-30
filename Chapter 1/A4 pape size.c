//Name:Diyanesh M S
//Roll No: CH.EN.U4CYS21015
#include<stdio.h>
int main()
{
	int i,h,w,t;
	h=1189,w=841;
	for(i=0;i<9;i++)
	{
		printf("A%d: %d x %d\n",i,h,w);
		t=h;
		h=w;
		w=t/2;
	}
	return 0;
}

