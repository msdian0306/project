#include <stdio.h>

// Function to calculate Gotham's population in a given year
double population(int year) {
    int base_year = 1990;
    int t = year - base_year;  // t is the number of years after 1990
    return 52.966 + 2.184 * t;
}

int main() {
    int year;
    double predicted_population;

    // Interact with the user to input the year
    printf("Enter the year for which you want to predict Gotham City's population: ");
    scanf("%d", &year);

    // Call the population function to predict population for the entered year
    predicted_population = population(year);

    // Display the result
    printf("The predicted population of Gotham City in the year %d is %.3f thousand people.\n", year, predicted_population);

    return 0;
}