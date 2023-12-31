//Name:Diyanesh M S
//Roll No: CH.EN.U4CYS21015
#include<stdio.h>
#include<math.h>
int main()
{
	float a,r;
	printf("Enter the angle: ");
	scanf("%f",&a);
	r=a*3.14/180;
	printf("Sin(%.2f) = %.2f\n", a, sin(r));
    printf("Cos(%.2f) = %.2f\n", a, cos(r));
    printf("Tan(%.2f) = %.2f\n", a, tan(r));
    printf("Cosec(%.2f) = %.2f\n", a, 1/sin(r));
    printf("Sec(%.2f) = %.2f\n", a, 1/cos(r));
    printf("Cot(%.2f) = %.2f\n", a, 1/tan(r));
	return 0;
}
