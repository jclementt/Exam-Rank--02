#include <stdio.h>

int ft_strcmp(const char *str1, const char *str2)
{
    int i;

    i = 0;
    while (str1[i] != '\0')
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (str1[i] - str2[i]);
}

int main(void)
{
    char word1[] = "abc";
    char word2[] = "abc";
    int result;

    result = ft_strcmp(word1, word2);
    printf("%i\n", result);
    return (0);
}