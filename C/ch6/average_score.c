#include<stdio.h>

#define SUBJECT_MAX     20


int main(void) {
    char subj[51], subj_alphabet[3];
    float rate, sum = 0.0, aver_score, sum_rate_num = 0.0;
    float sbuj_score[2][4] = {{4.5, 3.5, 2.5, 1.5},{4.0, 3.0, 2.0, 1.0}};
    int i, subj_num = 20;

    for(i = 0; i < SUBJECT_MAX; i++) {
        scanf("%s %f %s", subj, &rate, subj_alphabet);
        if(subj_alphabet[0] != 'F') {
            sum_rate_num += rate;
            if(subj_alphabet[1] == '+') {
                sum += (sbuj_score[0][subj_alphabet[0] - 'A'] * rate);
            }
            else if(subj_alphabet[1] == '0') {
                sum += (sbuj_score[1][subj_alphabet[0] - 'A'] * rate);
            }
        }
        else if(subj_alphabet[0] == 'F') {
            sum_rate_num += rate;
        }
    }

    if(sum_rate_num == 0.0) {
        aver_score = 0.0;
    }
    else {
        aver_score = sum / sum_rate_num;
    }
    
    printf("%f", aver_score);

    return 0;
}