#include <stdio.h>
int main()
{
    float time,mon,x,y,z,i,k,j;
    char pro;

    scanf("%c",&pro);
    scanf("%f",&time);

    x = time*100;
    y = (int)x%100;

    if(pro == 'A')
    {
        z = x - 20000-y;
        i = ((int)z *60)/100 + y;
        j = i/60.0;
        mon = 199 + (j*3.0);
    }
    else if(pro == 'B')
    {
        z = x - 40000 -y;
        i = ((int)z *60)/100 + y;
        j = i/60.0;
        mon = 299 + (j*2.0);
    }
    printf("%.2f",mon);

    return 0;
}
