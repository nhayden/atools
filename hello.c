/* hello.c: A program to show the time since the Epoch */
 
#include "config.h"
#include <stdio.h>
#include <sys/time.h>
#include <sys/stat.h>
#include "stat-size.h"
 
double get_sec_since_epoch()
{
    double sec;
    struct timeval tv;

    gettimeofday(&tv, NULL);
    sec = tv.tv_sec;
    sec += tv.tv_usec / 1000000.0;
    return sec;
}

void printTime() {
    printf("time: ");
    #ifdef HAVE_GETTIMEOFDAY
    printf("%f\n", get_sec_since_epoch());
    #else
    printf("don't know; gettimeofday not avail\n");
    #endif
}

void printBlksize(const char* fname) {
    printf("blksize: ");
    struct stat statbuf;
    stat(fname, &statbuf);
    printf("%lu\n", ST_BLKSIZE(statbuf));
}
 
int main(int argc, char* argv[])
{
    printTime();
    printBlksize("testfile.txt");
    return 0;
}
