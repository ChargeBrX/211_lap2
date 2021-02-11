#include <stdio.h>
int main()
{
    float time,mon;
    int x;
    char pro;

    scanf("%c",&pro);
    scanf("%f",&time);

    if(pro == 'A')
    {
        mon = 199 + (time-200)*3.0;
    }
    else if(pro == 'B')
    {
        mon = 299 + (time-400)*2.0;
    }
    printf("%.2f",mon);

    return 0;
}
