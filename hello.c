/* hello.c: A program to show the time since the Epoch */
 
#include "config.h"
#include <stdio.h>
#include <sys/time.h>
 
double get_sec_since_epoch()
{
    double sec;
    struct timeval tv;

    gettimeofday(&tv, NULL);
    sec = tv.tv_sec;
    sec += tv.tv_usec / 1000000.0;
    return sec;
}
 
int main(int argc, char* argv[])
{
    #ifdef HAVE_GETTIMEOFDAY
    printf("%f\n", get_sec_since_epoch());
    #else
    printf("don't know; gettimeofday not avail\n");
    #endif
    return 0;
}
