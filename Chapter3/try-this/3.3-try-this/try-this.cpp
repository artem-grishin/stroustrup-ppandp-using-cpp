#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    cout << "Enter your first name and age\n";
    string first_name;
    double age;
    cin >> first_name >> age;
    cout << "Hello, " << first_name << " (age in months: " << age * 12 << ")\n"; 
    return 0;
}
