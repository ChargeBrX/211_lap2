#include <stdio.h>
int main()
{
    int day,mo,x,fday;
    scanf("%d %d",&day,&mo);
    if(mo==4||mo==6||mo==9||mo==11)
    {
        x = day+30;
        fday = x%7;
    }
    else if(mo == 2)
    {
        x = day+28;
        fday = x%7;
    }
    else
    {
        x = day + 31;
        fday = x%7;
    }

    if(fday ==0)
    {
        fday = 7;
    }
    printf("%d",fday);
}
