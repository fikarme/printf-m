#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int topla(int count, ...)
{
    va_list args;
    va_start(args, count);

    int s = 0;
    int i;
	i = 0;
    while (i < count)
	{
        int x = va_arg(args, int);
        s += x;
		i++;
    }
    va_end(args);
    return s;
}

int topla2(int a, ...)
{
    va_list args;
    va_start(args, a);

    int s = a;
    int i;
    int x = va_arg(args, int);

    while(x != 0) 
	{
        s += x;
        x = va_arg(args, int);
    }

    va_end(args);
    return s;
}

int main(int argc, char *argv[])
{
    printf("toplam: %d\n", topla2(1, 2, 3, 4, 0));
    return 0;
}