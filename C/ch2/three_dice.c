#include<stdio.h>

int main(void) {
    int dice[3], price;

    scanf("%d %d %d", &dice[0], &dice[1], &dice[2]);

    if((dice[0] == dice[1]) && (dice[1] == dice[2])) {
        price = 10000 + (dice[0] * 1000);
    }
    else if((dice[0] != dice[1]) && (dice[1] != dice[2]) && (dice[2] != dice[0])) {
        
        if(dice[0] > dice[1]) {
            
            if(dice[0] > dice[2])
                price = dice[0];
            else
                price = dice[2];
        }
        else {
            
            if(dice[1] > dice[2])
                price = dice[1];
            else
                price = dice[2];
        }
        price *= 100;
    }
    else {
        
        if(dice[0] == dice[1])
            price = 1000 + (dice[0] * 100);
        else if(dice[1] == dice[2])
            price = 1000 + (dice[1] * 100);
        else if(dice[2] == dice[0])
            price = 1000 + (dice[2] * 100);
    }

    printf("%d", price);

    return 0;
}