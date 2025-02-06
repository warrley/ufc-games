#include <stdio.h>
#include <math.h>

// https://github.com/qxcodefup/arcade/blob/master/base/teleferico/Readme.md

int main() {
    double capacity, students, travels;
    
    printf("\nWhat is the total capacity?:  ");
    scanf("%lf", &capacity);

    printf("\nHow many students?:  ");
    scanf("%lf", &students);

    travels = ceil((students)/(capacity - 1));

    printf("\nNeed %0.lf travels", travels);

    return 0;
}