#include <stdio.h>

int main(void)
{
    /* A C programm to write the leteters A to z in small letterss
     **/

    char alphabet = 'a';


    while (alphabet <= 'z')
    {
        putchar(alphabet);

        alphabet++;
    }

    putchar('\n');
    return (0);
}

