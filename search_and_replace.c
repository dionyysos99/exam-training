#include <unistd.h>
int main(int ac,char *a[])
{
    int i;

    i = 0;
    if(ac == 4)
    {
        while(a[1][i])
        {
            if(a[1][i] == a[2][0])
                a[1][i] = a[3][0];
            write(1,&a[1][i],1);
            i++;            
        }
    }
    write(1,"\n",1);
    return (0);
}