#include <iostream>

using namespace std;

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a circle
double calculateCircleArea(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    double length, width, base, height, radius;

    // Input for the rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Calculate and output the area of the rectangle
    double rectangleArea = calculateRectangleArea(length, width);
    cout << "Area of the rectangle: " << rectangleArea << endl;

    // Input for the triangle
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Calculate and output the area of the triangle
    double triangleArea = calculateTriangleArea(base, height);
    cout << "Area of the triangle: " << triangleArea << endl;

    // Input for the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate and output the area of the circle
    double circleArea = calculateCircleArea(radius);
    cout << "Area of the circle: " << circleArea << endl;

    return 0;
}
