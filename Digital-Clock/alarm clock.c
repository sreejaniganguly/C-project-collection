#include <stdio.h>
#include <windows.h>
#include <time.h>

int main() {
    while(1){
        time_t now = time(NULL);
        struct tm *t = localtime(&now);

        if(t->tm_sec==30){
            printf("***ALARM ! ***\n");
                Sleep(3000);
        }
        system("cls");
        printf ("%02d:%02d:%02d\n",t->tm_hour, t->tm_min, t->tm_sec);
        fflush(stdout);

                Sleep(1000);

    }
    return 0;
}
