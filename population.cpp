#include <iostream>
#include <iomanip>

int main() {
    int startPopulation;
    double dailyIncreasePercentage;
    int daysToMultiply;

    // Prompt for the starting population and validate input
    do {
        std::cout << "Enter the starting number of organisms (minimum 2): ";
        std::cin >> startPopulation;
        if (startPopulation < 2) {
            std::cout << "Error: Starting population must be at least 2.\n";
        }
    } while (startPopulation < 2);

    // Prompt for the average daily increase percentage and validate input
    do {
        std::cout << "Enter the average daily population increase (as a percentage, minimum 0): ";
        std::cin >> dailyIncreasePercentage;
        if (dailyIncreasePercentage < 0) {
            std::cout << "Error: Daily increase percentage cannot be negative.\n";
        }
    } while (dailyIncreasePercentage < 0);

    // Prompt for the number of days to multiply and validate input
    do {
        std::cout << "Enter the number of days they will multiply (minimum 1): ";
        std::cin >> daysToMultiply;
        if (daysToMultiply < 1) {
            std::cout << "Error: Number of days must be at least 1.\n";
        }
    } while (daysToMultiply < 1);

    // Display header for population growth over the specified days
    std::cout << "\nDay\tPopulation\n";
    std::cout << "----------------------\n";

    double population = startPopulation;

    // Loop to calculate and display population size for each day
    for (int day = 1; day <= daysToMultiply; ++day) {
        std::cout << day << "\t" << std::fixed << std::setprecision(2) << population << '\n';
        population += population * (dailyIncreasePercentage / 100.0);
    }

    return 0;
}
