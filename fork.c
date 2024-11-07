#include <unistd.h>
#include <stdio.h>

int main()
{
    int a=20,
        pid=fork();
    
    if (pid==0)
    {
        printf("Soy el proceso hijo a=%d\n",a);
        return 0;
    }
    printf("Soy el proceso padre a=%d\n",a);
    printf("Mi hijo es pid=%d\n",pid);
    return 0;
}