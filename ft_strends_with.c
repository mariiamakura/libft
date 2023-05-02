#include "libft.h"

int ft_str_ends_with(char *str, char* end)
{
    int     end_size = ft_strlen(end);
    int     str_size = ft_strlen(str);
    char    *str_point_to_end = str + str_size - end_size;

    if (str_size <= end_size)
        return (1);
    return (ft_strncmp(str_point_to_end, end, end_size));
}