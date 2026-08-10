#include <unistd.h>
#include <stdio.h>
char *ft_strlowercase(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
            
        }
        i++;
    }
    return(str);
}
void snake_camels(char *str)
{
    ft_strlowercase(str);
    int i;
    int x;
    x = 0;
    i = 0;
    while(str[i])
    {
        if( str[i] == ' ')
        {
            
            write(1,&str[i],1);
            i++;
            continue;
        }
        else if( x % 2 == 0 &&  str[i] >= 'a' && str[i] <= 'z' )
        {
            str[i] -= 32;
            write(1,&str[i],1);
        }
        else{
            write(1,&str[i],1);
        }
        i++;
        x++;
    }
}
int main(int argc, char **argv)
{
    if(argc == 2)
        snake_camels(argv[1]);
    write(1,"\n",1);
}