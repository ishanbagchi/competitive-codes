#include<stdio.h>
#include"source.c"

extern int a;
int main() {
    printf("%d", a);
    return 0;
}