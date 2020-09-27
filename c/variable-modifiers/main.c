#include<stdio.h>
#include<stdlib.h>

#include"add.c"

extern int count;
int main() {
    int value;
    value = increament();
    value = increament();
    value = increament();

    count = count + 3;
    value = count;

    printf("%d", value);
    return 0;
}