//Name:Diyanesh M S
//Roll No: CH.EN.U4CYS21015
#include<stdio.h>
#include<math.h>
int main()
{
	float l1,l2,g1,g2,d;
	printf("Enter the latitude l1 : ");
	scanf("%f", &l1);
	printf("Enter the latitude l2 : ");
	scanf("%f", &l2);
	printf("Enter the longitude l2 : ");
	scanf("%f", &g1);	
	printf("Enter the longitude l2 : ");
	scanf("%f", &g2);
	d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
	printf("\nDistance %.2f",d);
	return 0;
}
