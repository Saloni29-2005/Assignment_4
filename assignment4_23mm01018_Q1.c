#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d", &a);
    switch (a%2)
    {
    case 0:
         printf("%d is a even number", a);
        break;

    case 1:
        printf("The number is odd");
        break;
    }
    return 0;
}
