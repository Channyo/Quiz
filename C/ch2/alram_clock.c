#include<stdio.h>

int main(void)
{
    int hour, minute;

    scanf("%d %d", &hour, &minute);

    if((minute - 45) >= 0) {
        minute -= 45;
    }
    else {

        if(hour == 0) {
            hour = 23;
        }
        else {
            hour -= 1;
        }
        minute += 15;
    }

    printf("%d %d", hour, minute);

    return 0;
}