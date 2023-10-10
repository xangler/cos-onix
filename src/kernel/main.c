#include <onix/onix.h>
#include <onix/types.h>
#include <onix/io.h>
#include <onix/string.h>
#include <onix/console.h>

char message[] = "hello onix!!!\n";
char world[] = "hello world!!!\n";
char buf[1024];

void kernel_init()
{
    console_init();
    u16 count = 20;
    for(u16 i = 0; i < count; i ++)
    {
        console_write(message, sizeof(message) - 1);
    }
    
    for(u16 i = 0; i < count; i ++)
    {
        console_write(world, sizeof(world) - 1);
    }

    return;
}
