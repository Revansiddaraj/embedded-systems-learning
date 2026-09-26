#include <stdio.h>

int main(void)
{
    // Integer array
    int sensor_values[5] = {10, 20, 30, 40, 50};

    // Character array (string)
    char device_name[] = "ESP32";

    printf("Embedded Systems - Day 3\n");
    printf("-------------------------\n");

    printf("Sensor Values:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Sensor[%d] = %d\n", i, sensor_values[i]);
    }

    printf("\nDevice Name: %s\n", device_name);

    return 0;
}
