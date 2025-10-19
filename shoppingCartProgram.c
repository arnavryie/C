#include <stdio.h>
#include <string.h>

int main() {
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("Welcome to the Shopping Cart Program!\n");
    printf("Please enter the item you want to add to your cart: ");
    fgets(item, sizeof(item), stdin);      // Read item name
    item[strcspn(item, "\n")] = 0;         // Remove newline character

    printf("Please enter the price of the item: ");
    scanf("%f", &price);

    printf("How many items do you want to add to your cart? ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("You have added %d %s(s) to your cart. The total price is: %c%.2f\n", quantity, item, currency, total);

    printf("you have bought %d %s(s) for a total of %c%.2f\n", quantity, item, currency, total);
    return 0;
}
