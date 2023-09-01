#include<stdio.h>

#define ASCII_0     80

void Rev_Str(char *p_str) {
    char temp_str;
    temp_str = p_str[0];
    p_str[0] = p_str[2];
    p_str[2] = temp_str;
}

int main(void) {
    char str1[4], str2[4];
    int num1, num2, i;

    scanf("%s %s", str1, str2);
    
    for(i = 2; i >= 0; i--) {
        if(str1[i] > str2[i]) {
            Rev_Str(str1);
            printf("%s", str1);
            break;
        }
        else if(str1[i] < str2[i]) {
            Rev_Str(str2);
            printf("%s", str2);
            break;
        }
    }

    return 0;
}