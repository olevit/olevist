#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    long n = get_long("Number: ");
    long a1 = n % 10;
    long a2 = (n / 10) % 10;
    long a3 = (n / 100) % 10;
    long a4 = (n / 1000) % 10;
    long a5 = (n / 10000) % 10;
    long a6 = (n / 100000) % 10;
    long a7 = (n / 1000000) % 10;
    long a8 = (n / 10000000) % 10;
    long a9 = (n / 100000000) % 10;
    long a10 = (n / 1000000000) % 10;
    long a11 = (n / 10000000000) % 10;
    long a12 = (n / 100000000000) % 10;
    long a13 = (n / 1000000000000) % 10;
    long a14 = (n / 10000000000000) % 10;
    long a15 = (n / 100000000000000) % 10;
    long a16 = (n / 1000000000000000) % 10;
    long b2 = (a2 * 2) % 10 +(a2 * 2) / 10;
    long b4 = (a4 * 2) % 10 + (a4 * 2) / 10;
    long b6 = (a6 * 2) % 10 + (a6 * 2) / 10;
    long b8 = (a8 * 2) % 10 + (a8 * 2) / 10;
    long b10 = (a10 * 2) % 10 + (a10 * 2) / 10;
    long b12 = (a12 * 2) % 10 + (a12 * 2) / 10;
    long b14 = (a14 * 2) % 10 + (a14 * 2) / 10;
    long b16 = (a16 * 2) % 10 + (a16 * 2) / 10;
    int M = (a1 + b2 + a3 + b4 + a5 + b6 + a7 + b8 + a9 + b10 + a11 + b12 + a13 + b14 + a15 + b16) % 10;
    if ((M == 0 && 3 * pow(10, 14) < n < 4 * pow(10, 14) && a15 == 3 && a14 == 4) || (M == 0
            && 3 * pow(10, 14) < n < 4 * pow(10, 14) && a15 == 3 && a14 == 7))
    {
        printf("AMEX\n");
    }
    else if (M == 0 && 5 * pow(10, 15) < n < 56 * pow(10, 4) && a16 == 5 && a15 < 6)
    {
        printf("MASTERCARD\n");
    }
    else if ((M == 0 && 4 * pow(10, 12) < n < 5 * pow(10, 12) &&  a13 == 4) || (M == 0
             && 4 * pow(10, 15) < n < 5 * pow(10, 15) && a16 == 4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
