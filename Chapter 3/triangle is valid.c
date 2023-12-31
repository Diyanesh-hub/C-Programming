//NAme:Diyanesh M S
//Roll No:CH.EN.U4CYS21015
#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &a, &b, &c );
    sum = a+b+c;

    if (sum == 180)
        printf("Triangle is valid");
    else
        printf("Triangle is not valid");

    return 0;
}
