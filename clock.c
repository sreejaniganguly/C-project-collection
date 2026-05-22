#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main () {

    int hour, minute, second;
    hour = minute = second = 0;
    while (1){
         system ("clear");
         printf ("%02d:%02d:%02d\n", hour, minute, second);
fflush(stdout);
second ++;

if (second == 60) {
    second = 0;
    minute +=1;
}

if (minute == 60) {
    minute = 0;
    hour +=1;
}

if (hour == 24) {
    hour = 0;
    minute=0;
    second=0;
}

sleep(1);

}
    return 0;

}
