#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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



