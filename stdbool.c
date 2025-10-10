#include <stdio.h>
#include <stdbool.h>

int main() {
    // variable = A usable container for a value
    //            behabves as if it were the value it contains

    bool isOnline = true; // or false
    
    if(isOnline) {
        printf("you are online\n");
    } else {
        printf("you are offline\n");
    }

    bool isStudent = true; // or false

    if(isStudent) {
        printf("you are a student\n");
    } else {
        printf("you are not a student\n");
    }
    
    bool forsale = true; // or false
    if(forsale) {
        printf("this item is for sale\n");
    } else {
        printf("this item is not for sale\n");
    }
    return 0;

    
}