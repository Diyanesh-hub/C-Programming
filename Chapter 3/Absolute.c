//NAme:Diyanesh M S
//Roll No:CH.EN.U4CYS21015
#include<stdio.h>-
int main()
{
    int n,num;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    if(num<0)
    {
        num = (-1)*num;
    }
    printf("The absolute value of %d is %d",n , num);
    return 0;
}
