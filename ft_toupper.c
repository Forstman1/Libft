

#include "libft.h"

int ft_tolower(int a)
{
    while(97 <= a && a <= 122)
       return(a - 32);
    return (a);
}