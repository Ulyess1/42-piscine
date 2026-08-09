#include <unistd.h>
void ft_print_comb2(void)
{
    int a;
    int y;
    a = 0;
    y = 0;
    char c;
    while( a <= 98)
    {
        y = a +1;
        while(  y <= 99)
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
            write(1,"",1);
            y++;
    }
    a++;
}
}
int main()
{
    ft_print_comb2();
}