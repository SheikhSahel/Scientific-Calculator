#include <stdio.h>
#include <math.h>

// Function prototypes
void add();
void subtract();
void multiply();
void divide();
void power();
void square_root();
void logarithm();
void sine();
void cosine();
void tangent();

int main() {
    int choice;

    do {
        // Display the menu
        printf("\nScientific Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Square Root\n");
        printf("7. Logarithm (base 10)\n");
        printf("8. Sine\n");
        printf("9. Cosine\n");
        printf("10. Tangent\n");
        printf("11. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform the operation based on the user's choice
        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                power();
                break;
            case 6:
                square_root();
                break;
            case 7:
                logarithm();
                break;
            case 8:
                sine();
                break;
            case 9:
                cosine();
                break;
            case 10:
                tangent();
                break;
            case 11:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 11);

    return 0;
}

void add() {
    double num1, num2;
    printf("Enter two numbers to add: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 + num2);
}

void subtract() {
    double num1, num2;
    printf("Enter two numbers to subtract: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 - num2);
}

void multiply() {
    double num1, num2;
    printf("Enter two numbers to multiply: ");
    scanf("%lf %lf", &num1, &num2);
    printf("Result: %.2lf\n", num1 * num2);
}

void divide() {
    double num1, num2;
    printf("Enter two numbers to divide: ");
    scanf("%lf %lf", &num1, &num2);
    if (num2 != 0) {
        printf("Result: %.2lf\n", num1 / num2);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

void power() {
    double base, exponent;
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &exponent);
    printf("Result: %.2lf\n", pow(base, exponent));
}

void square_root() {
    double num;
    printf("Enter a number to find its square root: ");
    scanf("%lf", &num);
    if (num >= 0) {
        printf("Result: %.2lf\n", sqrt(num));
    } else {
        printf("Error: Square root of a negative number is not defined in real numbers.\n");
    }
}

void logarithm() {
    double num;
    printf("Enter a number to find its logarithm (base 10): ");
    scanf("%lf", &num);
    if (num > 0) {
        printf("Result: %.2lf\n", log10(num));
    } else {
        printf("Error: Logarithm of zero or negative numbers is not defined.\n");
    }
}

void sine() {
    double angle;
    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle);
    printf("Result: %.2lf\n", sin(angle * M_PI / 180));
}

void cosine() {
    double angle;
    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle);
    printf("Result: %.2lf\n", cos(angle * M_PI / 180));
}

void tangent() {
    double angle;
    printf("Enter an angle in degrees: ");
    scanf("%lf", &angle);
    if (fmod(angle, 90) == 0 && fmod(angle / 90, 2) != 0) {
        printf("Error: Tangent is undefined for this angle.\n");
    } else {
        printf("Result: %.2lf\n", tan(angle * M_PI / 180));
    }
}
