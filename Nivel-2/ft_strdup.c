#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

char *ft_strdup(char *str)
{
    char *alloc;
    int size;
    int i;

    size = ft_strlen(str);
    alloc = malloc(size + 1);
    i = 0;
    while (str[i] != '\0')
    {
        alloc[i] = str[i];
        i++;
    }
    alloc[i] = '\0';
    return (alloc);
}

int main(void)
{
    char word[] = "Beatrice";
    char *word2;

    word2 = ft_strdup(word);
    printf("%s\n", word2);
    return (0);
}