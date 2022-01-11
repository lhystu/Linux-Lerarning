#include "Procbar.h"

void procbar(){
    char arr[NUM];
    memset(arr, '\0', NUM);
    const char* symbol = "|/-\\";
    int i = 0;
    while(i < NUM){
        printf("[%-100s][%-3d%%][%c]\r", arr, i, symbol[i%4]);
        fflush(stdout);
        arr[i++] = '#';
        usleep(400000);
    }

}

