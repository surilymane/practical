//convert distance into meter, cm, feet, inches.

#include<stdio.h>

int main()
{
    float distance, centimeter, feet, meter, inches;

    printf("Please enter the distance between two cities: ");
    scanf("%f",&distance);

    meter = distance*1000.00;
    centimeter = meter*100.00;
    feet = distance * 3280.84;
    inches = feet * 12.00;

    printf("The distance between two cities in meters is %f m, in centimeters is %f cm, in feet is %f ft and in inches is %f in.",meter,centimeter,feet,inches);

    return 0;
}
