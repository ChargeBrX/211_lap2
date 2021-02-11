#include <stdio.h>
int main()
{
    int x[3],i,min,j,a,b,c;
    char y[3];

    for(i=0; i<3; i++)
    {
        scanf("%d",&x[i]);
    }

    for(i=0; i<3-1; i++)
    {
        for(j=0; j<3-1; j++)
        {
            if(x[j]>x[j+1])
            {
                min = x[j+1];
                x[j+1] = x[j];
                x[j] = min;
            }
        }
    }
    a = x[0];
    b = x[1];
    c = x[2];

    scanf("%s",y);

    for(i=0;i<3;i++)
    {
        if(y[i]=='A')
        {
            x[i] = a;
        }
        else if(y[i]=='B')
        {
            x[i] = b;
        }
        else if(y[i]=='C')
        {
            x[i]= c;
        }
    }
    for(i=0;i<3;i++)
    {
        printf("%d ",x[i]);
    }
    return 0;

}
