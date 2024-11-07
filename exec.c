#include <unistd.h>
#include <stdio.h>

int main()
{
    int pid=fork();
    if (pid==0)
    {
        printf("Soy el hijo\n");
        execl("./nuevaRama","nuevaRama","como estas",(char *)NULL);
        printf("Esta linea no debe ejecutarse.");
    }
    printf("Proceso padre\n");
}