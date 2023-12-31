//NAme:Diyanesh M S
//Roll No:CH.EN.U4CYS21015
#include<stdio.h>
int main()
{
    int y,b=1900,ly,r,total_day,day;
    printf("Enter the year: ");
    scanf("%d", &y);
    y = (y-1)-b;
    ly = y/4;
    r = y - ly;
    total_day=(r*365) + (ly*366) + 1;
    day = total_day%7;
    if(day==0)
        printf("Monday");
    else if(day==1)
        printf("Tuesday");
    else if(day==2)
        printf("Wednesday");
    else if(day==3)
        printf("Thursday");
    else if(day==4)
        printf("Friday");
    else if(day==5)
        printf("Saturday");
    else if(day==6)
        printf("Sunday");
    else
        printf("Wrong Entry");
    return 0;
}
