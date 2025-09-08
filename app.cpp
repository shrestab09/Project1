#include <iomanip>
#include <iostream>

int main() {
    double value = 123.456789;

    // Set precision to 2 decimal places
    std::cout << std::fixed << std::setprecision(2) << value << std::endl;

    // Set precision to 4 decimal places
    std::cout << std::fixed << std::setprecision(4) << value << std::endl;

    return 1;
}

// This is app.cpp file.