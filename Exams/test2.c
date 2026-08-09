#include <unistd.h>
void arogan(char *str)
{
    int i ; 
    i = 0 ;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            if(str[i] != ' ')
            {
                write(1,&str[i],1);            
                
            }
            i++;
    }
}
int main()
{
    arogan("Hello World");
    arogan("1234@");
    arogan("42 Born To Code");
}