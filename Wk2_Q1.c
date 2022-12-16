#include <stdio.h>  
#include <windows.h>

int main(){
    int led = 0;
    int period = 0;
    int repeat;
    printf("How many times would you like the LED to turn on and off?: ");
    scanf("%d", &repeat);

    while(period != repeat){
        led = 1;
        printf("%d\n", led);
        Sleep(500);
        led = 0;
        printf("%d\n", led);
        Sleep(500);
        period+=1;
    }
}