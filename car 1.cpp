#include <iostream>  // For cout, endl
#include <string>    // For std::string
using namespace std;

// Define a class to represent a Car
class Car {
public:
    // Attributes of the car
    int year;
    string make;
    string model;
    string type;

    // Method to display the car's details
    void display() {
        cout << "Make/Company: " << make << ", Model: " << model
             << ", Year: " << year << ", Type: " << type << endl;
    }
};

int main() {
    // 1. Create four Car objects
    Car c1, c2, c3, c4;

    // 2. Set the details for the first car (Toyota)
    c1.make = "Toyota";
    c1.model = "Camry";
    c1.year = 2023;
    c1.type = "Sedan";

    // 3. Set the details for the second car (Ford)
    c2.make = "Ford";
    c2.model = "F-150";
    c2.year = 2022;
    c2.type = "Truck";

    // 4. Set the details for the third car (Tesla)
    c3.make = "Tesla";
    c3.model = "Model S";
    c3.year = 2024;
    c3.type = "Electric";

    // 5. Set the details for the fourth car (BMW)
    c4.make = "BMW";
    c4.model = "X5";
    c4.year = 2023;
    c4.type = "SUV";

    // 6. Display the comparison/details for all four cars
    cout << "--- Car Comparison ---" << endl;
    c1.display();
    c2.display();
    c3.display();
    c4.display();

    return 0;
}
