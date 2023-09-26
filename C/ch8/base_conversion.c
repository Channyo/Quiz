#include<stdio.h>
#include<string.h>

int main(void) {
    int b, sum = 0, str_size, str_num = 0, value;
    char str[9];
    scanf("%s %d", str, &b);

    str_size = strlen(str);

    do{
        if(str[str_num] >= 'A') {
            sum += ((str[str_num] - 'A' + 10) * (b ^ (str_size - str_num)));
        }
        else {
            sum += ((str[str_num] - '0') * (b ^ (str_size - str_num)));
        }
        str_num++;
    }while(str_size > str_num);
    
    printf("%d", sum);
    
    return 0;
}