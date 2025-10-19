#include <stdio.h>

// Format specifier = special token that begin wiht a % symbol
// followed by a character that specifies the data type
// and optional modeifiers (width precision flags)
// they control how data is displayed or iunterpreted

int main()  {
    float price = 45.99;
    double pi = 3.141592653589793;
    char currency = '$';
    char name[] = "sneha"; 
    int age = 22;

    printf("%d\n", age); // %d for int
    printf("%f\n", price); // %f for float
    printf("%.2f\n", price); // .2 for precision
    printf("%c\n", currency); // %c for char
    printf("%s\n", name); // %s for string
    printf("%.5f\n", pi); // .5 for precision


    // widt
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%-3d\n", num1);
    printf("%-3d\n", num2);
    printf("%-3d\n", num3);

        printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);

    printf("%d\n", num1);
    printf("%d\n", num2);

    float price1 = 5.2;
    float price2 = 105.99;
    float price3 = -1005.99;

    printf("%.2f\n", price1);
    printf("\n", price2);

    





    return 0;


}