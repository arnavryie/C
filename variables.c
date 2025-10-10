#include   <stdio.h>

int main()  {
    // variable = A usable container to store data
    // beheves as if it were the value it contains.
    
    float gpa = 3.5;
    float price =19.99;
    float temperature = 98.6;

    double pi = 3.141592653589793;

    printf("the value of pi is: %.2f\n", pi);

    printf("my gpa is: %.2f\n", gpa);
    printf("the price is: $%.2f\n", price);
    printf("the temperature is : %.1f F\n", temperature);


    // variable = A usable container for a value
                // Behaves as if it were the value it contains


    // int = whole numbers ( 4 bytes in modern systems)
    //float = single=precision decimal number (4 bytes)
    // double = double-prescision decimal number (8 bytes)
    //char = single character (1 byte)
    // char [] = array of characters (size veries)
    // bool = true or false (1 byte, requires <stdbool.h)

    return 0;

}