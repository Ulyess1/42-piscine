char *ft_strlowcase(char *str)
{
    int i;
    i = 0;
    while(str[i] >= 'A' && str[i] <= 'Z')
    {
        str[i] += 32;
        i++;
    }
    return(str);
}
char *ft_strcapitalize(char *str)
{
    ft_strlowcase(str);
    int i;
    int j;
    i = 0;
    j = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= '0' && str[i] <= '9')
        {
            if( j == 0 && str[i] >= 'a' && str[i] <= 'z')
                {
                    str[i] -= 32;
                    j = 1;
                }
        }
        else
            j = 0;
        i++;
    }
    return(str);
}
#include <stdio.h>
int main()
{
    char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
    printf("%s",ft_strcapitalize(str));
}