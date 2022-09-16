#include <stdlib.h>
#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	if (n % 2)
    while (n != 1)
	{
        if (n % 2 != 0)
            printf("no");
            return(0);
        n = n / 2;
    }
    printf("yes");
    return(1);
}

int main(void)
{
    is_power_of_2(88);
}