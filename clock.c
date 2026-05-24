#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

int main () {

    int hour, minute, second;
    hour = minute = second = 0;
    while (1){

     system ("cls");
         printf ("\r%02d:%02d:%02d\n", hour, minute, second);
fflush(stdout);
second ++;

if (second == 60) {
    minute ++;
    second = 0;
}

if (minute == 60) {
    hour ++;
    minute = 0;
  }

if (hour == 24) {
    hour = 0;
    minute=0;
    second=0;
}

Sleep(1000);

}
    return 0;

}
