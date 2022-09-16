#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i;
    int len;
    char tmp;

    len = 0;
    while (str[len])
        len++;
    i = -1;
    while (++i < --len)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
    }
    return (str);
}

int main(void)
{
    char s[] = "Joanna Clementino";
    char *new;

    new = ft_strrev(s);
    printf("%s\n", new);
    return (0);
}