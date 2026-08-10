#include <stdio.h>
#include <unistd.h>
void ft_putnbr(int nb)
{
    long n;
    char c;
    n = nb;
    if ( n > 9)
    {
        ft_putnbr( n / 10);
        c = n % 10 + '0';
        write(1,&c,1);
    }
    
}
int sum_digits(char *str)
{
    int sum;
    int i;
    i = 0;
    sum = 0;
    while(str[i])
    {
        sum += str[i] - '0';
        i++;
    }
    return(sum);
}
int main(int argc, char **argv)
{
    int j = 1;
    int sum = 0;

    if(argc >= 2)
    while( j <= argc - 1 )
    {
       sum += sum_digits(argv[j] );
        j++;
    }
    ft_putnbr(sum);
}