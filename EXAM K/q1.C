// 1. WAP to find sum of 1 to 10 number using UDF2. WAP to find sum of all odd value from given 1D Array3
#include <stdio.h>


int sum() {
    int sum = 0, n ;

    for (int i = 1; i <= 5; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int result = sum();
    printf("The sum of numbers from 1 to 10 is: %d\n", result);
    return 0;
}
