#include<iostream>

int main(void) {
    int score;
    char grades;

    std::cin >> score;
    if(score < 60)              grades = 'F';
    else if(score < 70)         grades = 'D';
    else if(score < 80)         grades = 'C';
    else if(score < 90)         grades = 'B';
    else if(score <= 100)       grades = 'A';

    std::cout << grades << std::endl;
}