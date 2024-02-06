#include<stdio.h>

int main(){

    int wholenumber = 5;
    float fractional = 3.2;
    double longfractional = 323232.23232;
    char sign = 'A';

    printf("I will output basic data types\n");
    printf("%d %f %lf %c\n", wholenumber, fractional, longfractional, sign);

    if (wholenumber > fractional){
        printf("Wholenumber is bigger.\n");
    } else {
        printf("Fractional is bigger or equal.\n");
    }

    if (fractional > longfractional){
        printf("Fractional is bigger.\n");
    } else if (longfractional > fractional) {
        printf("Longfractional is bigger.\n");
    } else {
        printf("They're equal.\n");
    }

    

    return 0;
}