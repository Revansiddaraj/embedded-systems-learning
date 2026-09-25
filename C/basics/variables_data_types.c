#include <stdio.h>

int main(void)
{
    int age = 22;
    float temperature = 25.5f;
    double voltage = 3.3;
    char grade = 'A';

    printf("Embedded Systems - Day 2\n");
    printf("-------------------------\n");

    printf("Age       : %d\n", age);
    printf("Temperature: %.2f C\n", temperature);
    printf("Voltage   : %.2f V\n", voltage);
    printf("Grade     : %c\n", grade);

    return 0;
}
