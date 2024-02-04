#include<stdio.h>
int main()
{
    int p,n,score;
    float si,r;
    printf("Enter your credit card balance");
    scanf("%d",&p);
    printf("Enter your credit score");
    scanf("%d",&score);
    if (score<600)
    {
       r=0.15;
    }
    else if (score>600 && score <750)
    {
        r=0.12;
    }
    else if (score >750)
    {
       r=0.10;
    }
    n=3;
    si=(p*n*r)/100;
    printf("Your interest amount is %f", si);
    return 0;
}
