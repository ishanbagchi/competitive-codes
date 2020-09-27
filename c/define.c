#include <stdio.h>

#define PI 3.14159 
#define VALUE 89
#define ADD(x, y) x + y // macro as functions
#define GREATER(x, y) if(x> y) \
                        printf("%d is greater than %d\n", x, y); \
                      else \
                        printf("%d is lesser than %d\n", x, y); // multiple lines in macro using back slash

int main() {
    printf("%.5f\n", PI);
    printf("VALUE is %d\n", VALUE);
    printf("Addition of 4 and 3 is: %d\n", ADD(4, 3));
    GREATER(7, 9);
    printf("Result of expression 5 * 3 + 4 is: %d\n", 5 * ADD(3, 4)); // first expansion then evaluation

    printf("Date: %s\nTime: %s\n", __DATE__, __TIME__);
    return 0;
}