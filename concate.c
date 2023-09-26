#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

                    // Concating of Strings

// Number of Character in a string
    int length(char *a){
        int result = 0; 
        for (int i = 0; a[i] != '\0'; i++){
            result ++;
        };
        return result;
    };

int main(){
    char a[]= "Hello ";
    char b[]= "World!!";
    char c[20];
    int count = 0 ;
    for(int i = 0; a[i] !='\0'; i++){
        c[count] = a[i];
        count++;
    }
    for(int i = 0; b[i] !='\0'; i++){
        c[count] = b[i];
        count++;
    }
    printf("The concatenated String of a and b is: %s\n", c);
}
    // strcpy(c,b);
    // strcpy(c,a);
    // int main() {
    //     char input[]= "Hello!! wolrd";
    //     printf("The length of Hello!! world is: %d\n", length(input));
    //     // printf("Please enter the String you want to know the length ** Please Note that spaces would be counted** \n ");
    //     // fgets(input, stdin);
    // }
