#include <stdio.h>

int GetGCD(int num1, int num2)

{

    while (num1 != num2)

    {

        if (num1 > num2)

            num1 = num1 - num2;

        if (num2 > num1)

            num2 = num2 - num1;

    }

    return num1;

}



int GetLCM(int num1, long num2)

{

    return (num1 * num2) / GetGCD(num1, num2);

}



int main()

{

    long num1, num2;

    long gcd, lcm;



    printf("Enter First Number: ");

    scanf_s("%d", &num1);



    printf("Enter Second Number: ");

    scanf_s("%d", &num2);



    gcd = GetGCD(num1, num2);

    lcm = GetLCM(num1, num2);



    printf("\nGCD(%d,%d) = %d\n", num1, num2, gcd);

    printf("\nLCM(%d,%d) = %d\n\n\n", num1, num2, lcm);



    return 0;

}