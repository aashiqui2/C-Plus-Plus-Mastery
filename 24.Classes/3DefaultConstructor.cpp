#include <iostream>
using namespace std;
const double PI {3.1415926535897932384626433832795};

class Cylinder {
public:
    // Explicit Default Constructor with print statement
    Cylinder() {
       cout << "Default constructor called!" <<endl;
    }

    // Parameterized Constructor
    Cylinder(double rad_param, double height_param) {
        base_radius = rad_param;
        height = height_param;
    }

    // Function to calculate volume
    double volume() {
        return PI * base_radius * base_radius * height;
    }

private:
    // Member variables
    double base_radius{1};
    double height{1};
};

int main() {
    Cylinder cylinder1;  // Default constructor gets called
   cout << "Volume: " << cylinder1.volume() <<endl;

    return 0;
}
