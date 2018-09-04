// Ft_putnbr est une fonction qui permet d'afficher un nombre sur output. Son protoype est void ft_putnbr(int n)

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    if(n < 0)
    {
        ft_putchar('-');
        n = n * -1;
    }
    if(n >= 10)
    {
        ft_putnbr(n / 10); // on divise par 10 parce que c'est l'equation qui permet davoir le premier nombre
        ft_putchar(n % 10 + '0'); // le module c'est pour avoir le reste
    }
    else
    {
        ft_putchar(n + '0'); // ce else putchar c'est quand le n est inferieur a 10 
    }
}

int     main(void)
{
    ft_putnbr(42);
    ft_putchar('\n');
    return 0;
}