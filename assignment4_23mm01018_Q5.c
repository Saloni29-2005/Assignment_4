#include <stdio.h>
int main()
{
    int n, a, b, c, c1, c2, c3, sum;
    printf("Enter a number");
    scanf("%d", &n);
    if (n > 999 || n < 100)
    {
        printf("Incorrect input");
    }

    a = n / 100;
    b = (n % 100) / 10;
    c = (n% 100) % 10;
    c1 = a * a * a, c2 = b * b * b, c3 = c * c * c;
    
    sum = c1 + c2 + c3;
    if (sum == n)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
