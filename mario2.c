#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i;
    do
    {
        i = get_int("Height: ");
    }
    while (i < 1 || i > 8);

    int j = 0;
    do
    {
        int k = 0;
        do
        {
            printf(" ");
            k++;
        }
        while (k < i - j - 0);

        int l = 0;
        do
        {
            printf("#");
            l++;
        }
        while (l <= j);

        printf(" ");

        int o = 0;
        do
        {
            printf("#");
            o++;
        }
        while (o <= j);

        printf("\n");
        j++;
    }
    while (j < i);
}
