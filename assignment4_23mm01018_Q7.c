#include<stdio.h>
int main()
{
    int age,price;
    printf("Enter the age");
    scanf("%d", &age);
    if (age<5)
    {
        printf("You can enter free \n Price = 0");
        }
    else if (age<20 && age>5)
    {
      printf("You have to pay price = 20 Rs.");
    }
    else if (age<59 && age>13)
    {
      printf("You have to pay price =50 Rs.");
    }
    else if (age>=60)
    {
      printf("You have to pay price = 12 Rs.");
    }
    return 0;
}
