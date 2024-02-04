#include<stdio.h>
int main()
{
    int a,b, result;
    char op;
    printf("Enter operator");
     scanf("%c",&op);
    printf("Enter two integers");
    scanf("%d%d",&a,&b);
    switch (op)
    {
    case '+':
       result= a+b;
        break;
    case '-':
       result= a-b;
        break;
        case '*':
       result= a*b;
        break;
        case '/':
       result= a/b;
        break;
    default:
    printf("invalid Operator");
        break;
    }
    printf("%d %c %d = %d", a,op,b,result);
    return 0;
}
