#include <unistd.h>
void ft_print_comb2(void)
{
    char a;
    char y;
    char c;
    
    a = '0';
    while( a <= 98)
    {
        y = a + 1;
            while( y <= 99)
            {
                c = a / 10 + '0';
                write(1,&c,1);
                c = a % 10 + '0';
                write(1,&c,1);
                write(1," ",1);
                c = y / 10 + '0';
                write(1,&c,1);
                c = y % 10 + '0';
                write(1,&c,1);
                    if(a != 98)
                write(1,", ",2);
                y++;
            }
            a++;
    }
}
int main()
{
    ft_print_comb2();
}