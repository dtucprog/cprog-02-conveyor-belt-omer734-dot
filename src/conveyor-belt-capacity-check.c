#include <stdio.h>

int main(void)
{
    const int MOTOR_CAPACITY=12;
    int motorCount;
    int totalPackageWeight;
  // Ask for the number of mototrs
    printf("How many motors are carrying the packages?\n");
    scanf("%d", &motorCount);

    // Ask for the number of packages
    printf("How many kg of packages do we expect?");
    scanf("%d", &totalPackageWeight);

    // Check whether the boxes have enough capacity
    if ( totalPackageWeight<= motorCount * MOTOR_CAPACITY)
    {
    printf("Yes! The conveyor belt can carry the packages.\n");
    }
    else
    {
        printf("No. The conveyor belt cannot carry the packages.\n");
    }
    return 0;
}
