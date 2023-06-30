#include<iostream>

int main(void) 
{
    int A, B, C ,D;

    std::cin >> A >> B >> C;

    if(B + C < 60) {
        B += C;
    }
    else {
        D = (B + C) / 60;
        B = (B + C) % 60;
        
        if((A + D) > 23)
            A = (A + D) - 24;
        else
            A += D;
    }

    std::cout << A << " " << B << std::endl;

    return 0;
}