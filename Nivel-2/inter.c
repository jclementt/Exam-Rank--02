#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int len;
    int stop;

    i = 0;
    j = 0;
    len = 0;
    if (argc == 3)
    {
        while (argv[1][i] != '\0')
        {
            j = 0;
            stop = 0;
            while (argv[2][j] && stop == 0)
            {
                if (argv[1][i] == argv[2][j] && (argv[1][i] != argv[1][len - 1]))
                {
                    write(1, &argv[1][i], 1);
                        stop = 1;
                }
                else  
                    j++;
            }
            len++,
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}