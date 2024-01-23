#include "ft_printf.h"

static int ft_check_type(const char *input, va_list args)
{
    int i;

    i = 0;
    if (*input == 'c')
        i += ft_print_char(va_arg(args, int));
    else if (*input == 's')
        i += ft_print_string(va_arg(args, char *));
    else if (*input == 'p')
        i += ft_print_pointer(va_arg(args, unsigned long ), 87);
    else if (*input == 'd' || *input == 'i')
        i += ft_print_int(va_arg(args, int));
    else if (*input == 'u')
        i += ft_print_unsigned(va_arg(args, unsigned int));
    else if (*input == 'x')
        i += ft_print_hex(va_arg(args, unsigned int), 87);
    else if (*input == 'X')
        i += ft_print_hex(va_arg(args, unsigned int), 55);
    else if (*input == '%')
        return ft_print_char('%');
    return i;
}

int ft_printf(const char *input, ...)
{
    va_list args;
    unsigned int i;

    i = 0;
    va_start(args, input);
    while (*input != '\0')
    {
        if (*input == '%')
        {
            input++;
            // if (*input == '%')
            //     i += ft_print_char('%');
            if (ft_strchr("cspdiuxX", *input))
                i += ft_check_type(input, args);
        }
        else
            i += ft_print_char(*input);
        input++;
    }
    va_end(args);
    return i;
}
int main()
{
    ft_printf("%%% %%% %");
    printf("\n%%% %%% %");
    return 0;
}
