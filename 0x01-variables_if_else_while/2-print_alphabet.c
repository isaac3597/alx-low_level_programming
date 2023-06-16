#include <stdio.h>

int main(void)
{
/**
 * main - main function
 * Description:printing alphabets in lowercase
 * Return: Return
 */
    char alphabet = 'a';


    while (alphabet <= 'z')
    {
        putchar(alphabet);

        alphabet++;
    }

    putchar('\n');
    return (0);
}

