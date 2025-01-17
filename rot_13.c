#include <unistd.h>
int main(int ac,char *a[])
{
    int i;

    i = 0;
    if(ac == 2)
    {
        while(a[1][i])
        {
            if((&a[1][i] >="a" && &a[1][i] <="n")
                || (&a[1][i] >="A" && &a[1][i] >="N"))
                    a[1][i] += 13;
            else if((&a[1][i] >="m" && &a[1][i] <="z")
                || (&a[1][i] >="M" && &a[1][i] >="Z"))
                    a[1][i] -= 13;
            write(1,&a[1][i],1);
            i++;    
        }  
    }
    write(1,"\n",1);
    return(0);
}