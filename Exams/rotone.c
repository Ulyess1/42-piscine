#include <unistd.h>

void    rotone(char *str)
{
    int     i;
    char    c;

    i = 0;
    while (str[i])
    {
        if (str[i] == 'z')
            c = 'a';
        else if (str[i] == 'Z')
            c = 'A';
        else if ((str[i] >= 'a' && str[i] <= 'y')
            || (str[i] >= 'A' && str[i] <= 'Y'))
            c = str[i] + 1;
        else
            c = str[i];
        write(1, &c, 1);
        i++;
    }
}

int main(void)
{
    rotone("abc");
    return (0);
}