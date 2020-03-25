#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    cout << "Enter number of miles: " << endl;
    double miles;
    cin >> miles;
    double miles_to_kilo = miles * 1.609;
    cout << miles << " miles is " << miles_to_kilo << " kilometers" << endl;
}
