#include "ft_printf.h"

static void	ft_printout(unsigned int nb)
{
	if (nb > 9)
		ft_print_unsigned(nb / 10);
	if (nb <= 9)
	{
		ft_putchar_fd(nb + 48, 1);
		return ;
	}
	ft_putchar_fd((nb % 10) + 48, 1);
}

int	ft_print_unsigned(unsigned int nb)
{
	unsigned int	i;

	ft_printout(nb);
	i = 1; 
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}
// int main()
// {
//     unsigned int number1 = 12345;
//     ft_printf(" mine : %u\n", ft_printf("%d",number1));
// 	// printf("real one : %u\n", printf("%d",number1));
//     return 0;
// }
// int main()
// {
//     unsigned int number = 12345;
//     int length = ft_print_unsigned(number);
//     printf("Total Length: %d\n", length);
//     return 0;
// }
