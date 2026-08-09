#include <unistd.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}
void snake_camels(char *str)
{
    int i;
    i = 0;
    int letter;
    letter = 0;
    while(str[i])
    {
        while(str[i] >= 'A' && str[i] <= 'Z')
                str[i] += 32;
        while(str[i] == ' ')
        {
            ft_putchar(' ');
            i++;
            continue;
            
        }
            if( letter % 2 == 0 )
            {
                str[i] -= 32;
                    ft_putchar(str[i]);
            }
            else
            {
                ft_putchar(str[i]);
            }

        letter++;
        i++;
    }
}
int main(int argc, char ** argv)
{
    if(argc == 2)
        snake_camels(argv[1]);
    ft_putchar('\n');
}