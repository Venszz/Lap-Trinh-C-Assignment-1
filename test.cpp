#include <iostream>
using namespace std;

int main() {
    float speed;
    int hours;
    
    cout << "Enter the speed of the vehicle in mph: ";
    cin >> speed;
    cout << "Enter the number of hours traveled: ";
    cin >> hours;
    
    for (int i = 1; i <= hours; i++) {
        float distance = speed * i;
        cout << "After hour " << i << " the vehicle has traveled " << distance << " miles." << endl;
    }
    
    return 0;
}

