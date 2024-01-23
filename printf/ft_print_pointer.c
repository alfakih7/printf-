#include "ft_printf.h"

static char *ft_create_string(unsigned long value, int *strlen)
{
    int i = 0;
    unsigned long temp = value;

    while (temp != 0)
    {
        temp = temp / 16;
        i++;
    }
    char *str = calloc(i + 1, sizeof(char));
    *strlen = i;
    return str;
}

int	ft_print_pointer(unsigned long value, int asc)
{
	unsigned long	tempval;
	char			*printout;
	int				i;
	int				*iptr;

	iptr = &i;
	tempval = value;
	printout = ft_create_string(value, iptr);
	if (!printout)
		return (0);
	while (tempval != 0 && i-- >= 0)
	{
		if ((tempval % 16) < 10)
			printout[i + 1] = (tempval % 16) + 48;
		else
			printout[i + 1] = (tempval % 16) + asc;
		tempval = tempval / 16;
	}
	i = ft_strlen(printout);
	i = i + ft_print_string("0x");
	ft_putstr_fd(printout, 1);
	free(printout);
	if (value == 0)
		i += ft_print_char('0');
	return (i);
}
