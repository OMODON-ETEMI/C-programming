#include <stdio.h>
#include <stdbool.h>

// compare if two strings are equal
int main(){
    char a[]= "Hello";
    char b[]= "Hello w";
    bool answer = true;
    for (int i = 0; a[i] != '\0'; i++){
        if(a[i] != b[i] || a[i+1] == '\0' && b[i+1] != '\0'){
            answer = false;
            break;
        }
    }
    printf("are the string equal: %s\n", answer ? "True":"False");
    }