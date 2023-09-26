#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

// Greatest common Divisor
    int GCD (int u, int v){
        int temp;
        while(v != 0){
            temp = u % v;
            u = v;
            v = temp;
        }
        return u;
    };

    float AbsoluteValue (float x){
        if(x < 0) x = -x;
        return x;
    }

    float Squareroot (float x){
        if (x < 0) {
            printf("Can't find sqaureroot value of a negative number");
            return -1.0;
        };
        float espilon = .0001;
        float guess = 1.0;
        while (AbsoluteValue(guess * guess - x) >= espilon){
            guess = (x / guess + guess)/ 2.0;
        };

        return guess;
    }


int main() {

    int result = GCD(150, 35);
    printf("The GCD of 150 and 35 is: %d\n", result);
    printf("The absolute value of -3 is: %.2f", AbsoluteValue(-3));
}