#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;

    i = 0;
    while (s[i] != '\0')
    {
        j = 0;
        while (reject[j] != '\0')
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
}

int main()
{
    int size;

    char str1[] = "geeksforgeeks";
    char str2[] = "kfc";
  
    size = ft_strcspn(str1, str2);
  
    printf("A quantidade de caracter é:  %d\n", size);
}