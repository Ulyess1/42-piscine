#include <unistd.h>
void thor(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y'
            || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y' )
        
            write(1,"*",1);
        else 
            write(1,&str[i],1);
    
    i++;
    }
    write(1,"\n",1);
}
int main()
{
    thor("AEeihjusdf");
}