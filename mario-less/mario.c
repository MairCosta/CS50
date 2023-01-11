#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: \n");
    }
    while (!(height > 0 && height < 9)); //limit the possible user inputs

    for (int row = 0; row < height; row++)
    {
        for (int space = height - row - 1; space > 0 ; space--) // 3 - 0 - 1, dois espacos na primeira de tres filas
        {
            printf(" ");
        }
        for (int hash = 0; hash < row + 1; hash++) //
        {
            printf("#");
        }
        printf("\n");
    }
}
