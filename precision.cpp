#include <iostream>

int main() {
    double value = 12.34;

    // Set precision to 2
    std::cout.precision(1);

    // Set width to 10 and fill with '-'
	std::cout.width(10);
  	std::cout.fill('?');

    // Disable scientific notation
    	std::cout << std::fixed;

    // Output the value with the set precision, width, and fill character
    std::cout << value << std::endl;

    return 0;
}

