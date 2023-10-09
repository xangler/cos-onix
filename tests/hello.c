#include <stdio.h>


char message[] = "hello world!!!\n";
char buf[1024]; // .bss

int main()
{
    printf("%s", message);
    return 0;
}
