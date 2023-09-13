#include<stdio.h>
#include<string.h>

int main(void) {
    char str[200];
    int alphabet_num = 0, str_size, i;

    scanf("%s", str);
    str_size = strlen(str);

    for(i = 0; i < str_size; i++) {
        alphabet_num++;

        if((str[i] == '=') || (str[i] == '-')) {
            
            if((str[i - 1] == 'z') && (str[i - 2] == 'd')) {
                alphabet_num--;
            }
            alphabet_num--;
        }
        else if(str[i] == 'j') {
            
            if((str[i - 1] == 'l') || (str[i - 1] == 'n')) {
                alphabet_num--;
            }
        }
    }
    printf("%d", alphabet_num);
    
    return 0;
}