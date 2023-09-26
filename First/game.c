#include <stdio.h>
#include <stdlib.h>

int main{
    printf("\t ------ Welcome to Prime numbers between 1 - 100 ------ \n");

    int array[100] = {2, 3};
    int count = 2; // Number of prime numbers found
    for (int i = 3; i <= 100; i++) {
        if (i % 2 != 0) {
            int isPrime = 1; // Assume i is prime until proven otherwise
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = 0; // i is not prime
                    break;
                }
            }
            if (isPrime) {
                if (count < 100) {
                    array[count] = i;
                    count++;
                } else {
                    break; // Found the first 10 prime numbers
                }
            }
        }
    }
    for (int i = 0; i < 25; i++) {
        printf("%d\n", array[i]);
    }
}