#include <iostream>
#include <stdexcept>  

 
double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw std::invalid_argument("Error: Division by zero is not allowed.");
    }
    return numerator / denominator;
}

int main() {
    double num, denom;

    std::cout << "Enter numerator: ";
    std::cin >> num;

    std::cout << "Enter denominator: ";
    std::cin >> denom;

    try {
        double result = divide(num, denom);  
        std::cout << "Result: " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "Program continues running..." << std::endl;
    return 0;
}
