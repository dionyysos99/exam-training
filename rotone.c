#include <unistd.h>
int main(int ac,char *a[])
{
    int i;

    i = 0;
    if(ac == 2)
    {
        while(a[1][i])
        {

            if (a[1][i] == 90 || a[1][i] == 122)
                a[1][i] -= 25;
            else if((&a[1][i] >="a" && &a[1][i] <="y")
                || (&a[1][i] >="A" && &a[1][i] >="Y"))
                    a[1][i] += 1;
            write(1,&a[1][i],1);
            i++;    
        }  
    }
    write(1,"\n",1);
    return(0);
}