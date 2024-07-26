#include <cs50.h>
#include <stdio.h>
int main()
{
    int i, space = 2, j = 0;
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n == 0 || n < 1 || n > 8);
    for (i = 0; i < n; i++)
    {
        for (space = 2; space <= n - i; space++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");

        
    }
}
