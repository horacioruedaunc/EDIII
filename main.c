#include "stdio.h"

int main(int argc, char const *argv[])
{
    printf("Los primeros diez números son:\n");

    for (size_t i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}
