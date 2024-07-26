#include <iostream>

using namespace std;

const double PI = 3.14159;

int main() {
    double ray, area;
    cout << "Enter the radius of the circle: ";
    cin >> ray;
    area = PI * ray * ray;
    cout << "The area of the circle: " << area << endl;
    return 0;
}

