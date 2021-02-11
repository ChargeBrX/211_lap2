#include <stdio.h>
int main()
{
    unsigned a,b,c,x;
    char grad;
    scanf("%u",&a);
    scanf("%u",&b);
    scanf("%u",&c);

    x = a+b+c;

        if(x>=80&&x<=100)
        {
            printf("A");
        }
        else if(x>=75&&x<80)
        {
            printf("B+");
        }
        else if(x>=70&&x<75)
        {
            printf("B");
        }
        else if(x>=65&&x<70)
        {
            printf("C+");
        }
        else if(x>=60&&x<65)
        {
            printf("C");
        }
        else if(x>=55&&x<60)
        {
            printf("D+");
        }
        else if(x>=50&&x<55)
        {
            printf("D");
        }
        else if(x<50&&x>=0)
        {
            printf("F");
        }

    return 0;

}
