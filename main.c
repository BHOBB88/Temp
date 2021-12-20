#include <stdio.h>
float userFahr;
float userCels;
// function declaration
// conversion from fahrenheit to celsius
float celsius(float userFahr);

// conversion from celsius to fahrenheit
float fahrenheit(float userCels);

// main driver function
int main(void) {
    float cels;
    float fahr;
    printf("Enter Celsius: \n");
    scanf("%f",&userCels);
    fahr = fahrenheit(userCels);
    printf("Temperature: %fF\n", fahr);

    printf("Fahrenheit: \n");
    scanf("%f",&userFahr);
    cels = celsius(userFahr);
    printf("Temperature: %fC\n", cels);
    return 0;
} // end of main driver function

// function definition
// function that will perform fahrenheit from conversion to celsius
float fahrenheit(float userCels) {
    return userCels * 1.8 + 32;
}

// function that will perform conversion from fahrenheit to celsius
float celsius(float userFahr) {
    return (userFahr - 32) / 1.8;
}