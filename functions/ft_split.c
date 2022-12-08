/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mishamakura <mishamakura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 18:26:30 by mishamakura       #+#    #+#             */
/*   Updated: 2022/12/08 21:47:22 by mishamakura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
size_t ft_wordcount(const char *str, char c)
{
    size_t  words;

    words = 0;
    while (*str)
    {
        if (*str == c)
            str++;
        else
        {
            words++;
            while (*str && *str != c)
                str++;
        }
    }
    return (words);
}

char *ft_word(const char *str, char c)
{
    char *word;
    size_t i;

    i = 0;
    while (*str && *str == c)
        str++;
    while (str[i] && str[i] != c)
        i++;
    word = malloc((i + 1) * sizeof(char));
    if (word == 0)
        return (0);
    i = 0;
    while (*str && *str != c)
    {
        word[i] = *str;
        i++;
        str++;
    }
    word[i] = 0;
    return (word);
}

void   ft_free(size_t i, char **ptr)
{
    while (i > 0)
    {
        free(ptr[i - 1]);
        i--;
    }    
    free(ptr); 
}
 
char    **ft_split(char const *s, char c)
{
    char **ptr_words;
    size_t num_words;
    size_t i;

    if (!s)
        return (0);
    num_words = ft_wordcount(s, c);
    ptr_words = malloc((num_words + 1) * sizeof(char));
    if (ptr_words == 0)
        return (0);
    i = 0;
    while (i < num_words)
    {
        while (*s && *s == c)
            s++;
        ptr_words[i] = ft_word(s, c);
        if (ptr_words[i] == 0)
            ft_free(i, ptr_words);
        while (*s && *s != c)
            s++;
        i++;
    }
    ptr_words[i] = 0;
    return (ptr_words);
}

/* int main ()
{
    char sen[] = "hi ha hy";
    char c = ' ';
    char **res = ft_split(sen, c);
    int i;

    i = -1;
    while (i++ < 3 && res[i])
        printf("%s\n", res[i]);git
} */