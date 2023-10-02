#include <stdio.h>

int main() {
    int integerInput;
    float floatInput;
    double doubleInput;
    char charInput;
    long longInput;
    short shortInput;
    unsigned int unsignedIntInput;
    unsigned long unsignedLongInput;
    unsigned short unsignedShortInput;
    unsigned char unsignedCharInput;

    printf("Enter an integer: ");
    scanf("%d", &integerInput);

    printf("Enter a floating-point number: ");
    scanf("%f", &floatInput);

    printf("Enter a double: ");
    scanf("%lf", &doubleInput);

    printf("Enter a character: ");
    scanf(" %c", &charInput);

    printf("Enter a long: ");
    scanf("%ld", &longInput);

    printf("Enter a short: ");
    scanf("%hd", &shortInput);

    printf("Enter an unsigned integer: ");
    scanf("%u", &unsignedIntInput);

    printf("Enter an unsigned long: ");
    scanf("%lu", &unsignedLongInput);

    printf("Enter an unsigned short: ");
    scanf("%hu", &unsignedShortInput);

    printf("Enter an unsigned character: ");
    scanf(" %c", &unsignedCharInput);

    printf("\n");

    printf("You entered:\n");
    printf("Integer: %d\n", integerInput);
    printf("Float: %f\n", floatInput);
    printf("Double: %lf\n", doubleInput);
    printf("Character: %c\n", charInput);
    printf("Long: %ld\n", longInput);
    printf("Short: %hd\n", shortInput);
    printf("Unsigned Integer: %u\n", unsignedIntInput);
    printf("Unsigned Long: %lu\n", unsignedLongInput);
    printf("Unsigned Short: %hu\n", unsignedShortInput);
    printf("Unsigned Character: %c\n", unsignedCharInput);

    return 0;
}
