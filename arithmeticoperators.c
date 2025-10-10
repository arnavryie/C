#include <stdio.h>

// arithmetic operators = symbols used to perform mathematical operations
// + - * / % ++ --
// they can be used with integers and floating point numbers

int main()  {


int x = 20;
int y = 3;
int z = 10;

z = x + y;
z = x * y;
z = x - y;
z = x / y; // division
z = x % y; // modulus (remainder)

x--; // decrement
y++; // increment

x = x + 2 ; // x = 21

x = x / 2; // x = 10

printf("%d\n", z);






return 0;  
}