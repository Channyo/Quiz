#include<stdio.h>
#include<string.h>

#define ASCII_A         65
#define ASCII_Z         90
#define MIN_SEC         3

#define EXSEP_S         18
#define EXSEP_Z         25  

int main(void) {
    char str[16];
    int str_size, i, seq_num, sum = 0;

    scanf("%s", str);
    str_size = strlen(str);
    for(i = 0; i < str_size; i++) {
        seq_num = (str[i] - ASCII_A);
        if(seq_num == EXSEP_Z) {
            seq_num -= 2;
        }
        else if(seq_num >= EXSEP_S) {
            seq_num -= 1;
        }
        
        sum += ((seq_num) / 3 + MIN_SEC); 
    }
    printf("%d", sum);

    return 0;
}