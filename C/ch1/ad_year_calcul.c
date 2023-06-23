#include<stdio.h>
#define BE_YEAR_CONST   543

int Ad_Year_Calcul(int year) {
    int ad_year;

    ad_year = year - BE_YEAR_CONST;
    return ad_year;
}

int main(void) {
    int ad_year, be_year;
    scanf("%d", &be_year);
    ad_year = Ad_Year_Calcul(be_year);
    printf("%d\n", ad_year);

    return 0;
}