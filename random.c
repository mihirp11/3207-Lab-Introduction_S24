//
// Created by Mihir Patel on 1/17/24.
//
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char randchar(){
    char c;
    int num = (rand() % (90 - 65 + 1)) + 65;
    c = num;
    return c;
}

