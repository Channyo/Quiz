#include<stdio.h>
#include<string.h>

int main(void) {
    char str[1000001];
    int i, str_size, num = 0;

    scanf("%[^\n]s", str);
    str_size = strlen(str);
    if(str_size > 1) {
        for(i = 1; i < str_size - 1; i++) {

            if(str[i] == ' ') {
                num++;
            }
        }
        num++;
    }
    else {
        
        if(str[0] != ' ')
            num++;
    }
    printf("%d", num);

    return 0;
}