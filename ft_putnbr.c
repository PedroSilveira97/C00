#include <unistd.h>

void    ft_putnbr(int n)
{
    char    c;

    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    else if (n < 0)
    {
        write(1, "-", 1);
        n = n * -1;
    }
    if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
    {
        c = n + '0';
        write(1, &c, 1);
    }
}

int main(int ac, char *av)
{
    ft_putnbr(42);
    write(1, "\n", 1);
    
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    
    ft_putnbr(-2147483647);
    write(1, "\n", 1);

    ft_putnbr(-1234);
    write(1, "\n", 1);

    return (0);
}