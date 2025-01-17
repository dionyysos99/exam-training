#include <unistd.h>
int ft_strlen(char *str)
{
    unsigned int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}
int main(int ac,char *a[])
{
    int b = ft_strlen(a[1]);
    if(ac == 2)
    {
        while(b-- != 0)
            write(1,&a[1][b],1);
    }
    write(1,"\n",1);
}