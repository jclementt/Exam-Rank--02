#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{	
	char *ps1;
	char *ps2;
	int i;
	int j;

	ps1 = (char*)s1;
	ps2 = (char*)s2;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
				return (&ps1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	char *str1, *str2;
	char *result1, *result2;

	str1 = "Brasil";
	str2 = "sil";

	result1 = ft_strpbrk(str1, str2);
	result2 = strpbrk(str1, str2);

	printf("ft_strcsnp = %s\n", result1);
	printf("strcsnp = %s\n", result2);
	return (0);
}