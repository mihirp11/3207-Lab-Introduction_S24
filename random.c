//
// Created by Mihir Patel on 1/17/24.
//
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char randchar(){
    srand(time(0));
    char c;
    int num = (rand() % (90 - 65 + 1)) + 65;
    c = num;
    return c;
}

int main(){
    char c  = randchar();
    printf("%c", c);
}

