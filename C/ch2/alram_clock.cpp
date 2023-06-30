#include<iostream>

int main(void)
{
    int hour, minute;

    std::cin >> hour >> minute;

    if((minute - 45 >= 0)) {
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
    std::cout << hour << " " << minute << std::endl;

    return 0;
}