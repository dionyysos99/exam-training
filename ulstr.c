#include <unistd.h>
int main(int ac,char *a[])
{
    int i;

    i = 0;
    if(ac == 2)
    {
        while(a[1][i])
        {
            if(a[1][i] >= 97 && a[1][i] <= 122)
                a[1][i] -= 32;
            else if(a[1][i] >= 65 && a[1][i] <= 90)
                a[1][i] += 32;
            write(1,&a[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
    return (0);
}