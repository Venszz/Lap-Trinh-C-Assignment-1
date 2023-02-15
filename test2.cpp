#include <cmath>
#include <iostream>

using namespace std;

void quadraticEquation(double a, double b, double c) {
    double discriminant = b*b - 4*a*c;
    double root1, root2;
    int num_roots;

    if (discriminant > 0) {
        num_roots = 2;
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Two real roots: " << root1 << " and " << root2 << endl;
    } else if (discriminant == 0) {
        num_roots = 1;
        root1 = -b / (2*a);
        cout << "One real root: " << root1 << endl;
    } else {
        num_roots = 0;
        cout << "No real roots" << endl;
    }
    cout << "Number of roots: " << num_roots << endl;
}

int main() {
    double a, b, c;
    cout << "Enter the coefficients of the quadratic equation: ";
    cin >> a >> b >> c;
    quadraticEquation(a, b, c);
    return 0;
}

