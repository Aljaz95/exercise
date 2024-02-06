#include<stdio.h>

int main(int argc, char** argv){

    int i = 0;
    printf("START\n");
    printf("Number of arguments: %d\n", argc);
    while (i<argc){
        printf("%s\n", argv[i]);
        i = i+1;
    }

//    int number = argv[3];
//    printf("%d\n", number);

    return 0;
}