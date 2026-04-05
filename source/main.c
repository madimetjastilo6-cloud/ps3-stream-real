#include <stdio.h>
#include <stdlib.h>
#include <sys/process.h>
#include <sys/timer.h>

SYS_PROCESS_PARAM(1001, 0x10000)

int main(void)
{
    printf("Hello from PS3 Stream App!\n");

    while (1) {
        sys_timer_usleep(1000000);
    }

    return 0;
}
