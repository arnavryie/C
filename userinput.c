#include <stdio.h>
#include <string.h> // <-- this is required for strcspn()

int main() {
    int age = 0;
    float gpa = 0.0f;
    char grade = '0';
    char name[30];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);  // space before %c to skip newline

    getchar(); // consume newline left by scanf

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline if present
    name[strcspn(name, "\n")] = '\0';

    printf("You are %d years old, your GPA is %.2f, your grade is %c and your name is %s.\n",
           age, gpa, grade, name);

    return 0;
}
