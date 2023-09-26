#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>


// writing strings in reverse order
int main(){
    char input[100];
    printf("\t\t Welcome to a Program that prints your string in reverse\n");
    printf("Please enter a string: ");
    int j = 0;
    fgets(input, sizeof(input)-1, stdin);
    char result[100];
    for(int i = strlen(input) - 1; i >= 0 ; i--){
        result[j] = input[i];
        j++;
    }
    printf("The reverse string is: %s",result);
}

// compare if two strings are equal
// int main(){
//     char a[]= "Hello";
//     char b[]= "Hello w";
//     bool answer = true;
//     for (int i = 0; a[i] != '\0'; i++){
//         if(a[i] != b[i] || a[i+1] == '\0' && b[i+1] != '\0'){
//             answer = false;
//             break;
//         }
//     }
//     printf("are the string equal: %s\n", answer ? "True":"False");
//     }


// Concating of Strings

// // Number of Character in a string
//     int length(char *a){
//         int result = 0; 
//         for (int i = 0; a[i] != '\0'; i++){
//             result ++;
//         };
//         return result;
//     };

// int main(){
//     char a[]= "Hello ";
//     char b[]= "World!!";
//     char c[20];
//     int count = 0 ;
//     for(int i = 0; a[i] !='\0'; i++){
//         c[count] = a[i];
//         count++;
//     }
//     for(int i = 0; b[i] !='\0'; i++){
//         c[count] = b[i];
//         count++;
//     }
//     printf("The concatenated String of a and b is: %s\n", c);
// }
    // strcpy(c,b);
    // strcpy(c,a);
    // int main() {
    //     char input[]= "Hello!! wolrd";
    //     printf("The length of Hello!! world is: %d\n", length(input));
    //     // printf("Please enter the String you want to know the length ** Please Note that spaces would be counted** \n ");
    //     // fgets(input, stdin);
    // }


// Greatest common Divisor
//     int GCD (int u, int v){
//         int temp;
//         while(v != 0){
//             temp = u % v;
//             u = v;
//             v = temp;
//         }
//         return u;
//     };

//     float AbsoluteValue (float x){
//         if(x < 0) x = -x;
//         return x;
//     }

//     float Squareroot (float x){
//         if (x < 0) {
//             printf("Can't find sqaureroot value of a negative number");
//             return -1.0;
//         };
//         float espilon = .0001;
//         float guess = 1.0;
//         while (AbsoluteValue(guess * guess - x) >= espilon){
//             guess = (x / guess + guess)/ 2.0;
//         };

//         return guess;
//     }


// int main() {

//     int result = GCD(150, 35);
//     printf("The GCD of 150 and 35 is: %d\n", result);
//     printf("The absolute value of -3 is: %.2f", AbsoluteValue(-3));
    
//     double height = 3.6;
//     double width = 2.7;
//     double area = height * width;
//     double perimeter = 2 * (height * width);

//    printf("The area is: %.2f\nThe perimeter is: %.2f\n", perimeter, area);
        // _Bool a = 0;
        // _Bool b = 1;
        // _Bool result = (a || b);
        // printf("The result is: %d" , result);
        // int time, netpay;
        // float grosspay;
        // printf("\tWelcome!!!!\n");
        // printf("Please input the numbers of hours worked: ");
        // scanf("%d", &time);
        // if(time <= 40 ){
        //     netpay = time * 12;
        //     if(netpay <= 300){
        //         int tax = 15;
        //         grosspay = (tax/100.0) * netpay;
        //         printf("Your Grosspay is : %.2f\n, Your tax is: %d\n, Your netpay is: %d\n", grosspay, tax, netpay);
        //     }
        //     else if (netpay > 300 && netpay <= 450){
        //         int tax = 20;
        //         grosspay = (tax/100.0) * netpay;
        //         printf("Your Grosspay is : %.2f\n, Your tax is: %d\n, Your netpay is: %d\n", grosspay, tax, netpay);
        //     }
        //     else {
        //         int tax = 25;
        //         grosspay = (tax/100.0) *netpay;
        //         printf("Your Grosspay is : %.2f\n, Your tax is: %d\n, Your netpay is: %d\n", grosspay, tax, netpay);
        //     }
        // }
        // else {
        //     netpay = 40 * ((time - 40) + (time/2)) * 12;
        //     int tax = 25;
        //     grosspay = (tax/100.0)*netpay;
        //     printf("Your Grosspay is : %.2f\n, Your tax is: %d\n, Your netpay is: %d\n", grosspay, tax, netpay);
        // }
        // printf("\t ------ Welcome to guess the number game ------ \n");
        // srand(time(NULL));
        // int random = (rand()%20) + 1;
        // for(int i = 5; i >= 0; i--){
        //     int guess;
        //     printf("You have %d, tries left\n" ,i);
        //     printf("Enter a guess: ");
        //     scanf("%d", &guess);
        //     if(i == 0 ){
        //         printf("Sorry you lost try again");
        //     }
        //     if(random == guess){
        //         printf("Congratulations you have won!!");
        //         break;
        //     }
        //     else {
        //         if (guess > random){
        //             printf("Your guess is too high\n");
        //         }
        //         if (guess < random){
        //             printf("Your guess is too low\n");
        //         }
        //     }
        // }

    // printf("\t ------ Welcome to Prime numbers between 1 - 100 ------ \n");

    // int array[100] = {2, 3};
    // int count = 2; // Number of prime numbers found

    // for (int i = 3; i <= 100; i++) {
    //     if (i % 2 != 0) {
    //         int isPrime = 1; // Assume i is prime until proven otherwise
    //         for (int j = 2; j * j <= i; j++) {
    //             if (i % j == 0) {
    //                 isPrime = 0; // i is not prime
    //                 break;
    //             }
    //         }
    //         if (isPrime) {
    //             if (count < 100) {
    //                 array[count] = i;
    //                 count++;
    //             } else {
    //                 break; // Found the first 10 prime numbers
    //             }
    //         }
    //     }
    // }

    // for (int i = 0; i < 25; i++) {
    //     printf("%d\n", array[i]);
    // }

    // return 0;