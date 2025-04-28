#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get Numbers

    long number = get_long("Number: ");
    long temp = number;
    int sum = 0;
    int digit = 0;
    int count = 0;


    while (temp > 0)
{

    int last_digit = temp % 10;


    if (count % 2 == 1)
    {
        int product = last_digit * 2;
        sum += product / 10 + product % 10;
    }
    else
    {
        sum += last_digit;
    }

    temp /= 10;
    count++;

}

if (sum % 10 != 0)
{
    printf("INVALID\n");
    return 0;
}

    temp = number;
    while (temp >= 100)
    {
        temp /= 10;
    }
    int first_two = temp;
    int first = first_two / 10;

    if ((first_two == 34 || first_two ==37) && count == 15)
    {
        printf("AMEX\n");
    }
    else if (first_two >= 51 && first_two <= 55 && count == 16)
    {
        printf("MASTERCARD\n");
    }
    else if (first == 4 &&  (count == 13 || count ==16))
    {
    printf("VISA\n");
    }
    else
        {
        printf("INVALID\n");
    }
}
