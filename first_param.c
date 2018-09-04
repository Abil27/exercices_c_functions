/*
Assignment name  : aff_first_param
Expected files   : aff_first_param.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes strings as arguments, and displays its first
argument followed by a \n.

If the number of arguments is less than 1, the program displays \n.

Example:

$> ./aff_first_param it is at this moment jackson knew | cat -e
it$
$> ./aff_first_param "I bet you can't print me" | cat -e
I bet you can't print me$
$> ./aff_first_param | cat -e
$
*/

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    aff_first_param(char *str)
{
    int i;

    i = 0;
    while(str[i] != 0)
    {
        ft_putchar(str[i]);
        i++;
    }
    //ft_putchar('\n');
    return (*str);
}

int     main(int argc, char **argv)
{
    if(argc >= 2)
    {
        aff_first_param(argv[1]);
    }
    ft_putchar('\n');
    return (0);
}