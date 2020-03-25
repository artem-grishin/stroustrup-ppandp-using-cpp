#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int val1, val2, smallest, largest;
    cout << "Enter two integers: " << endl;
    cin >> val1 >> val2;
    
    //smallest & largest number
    if(val1 > val2) {
        cout << val2 << " is the smaller number\n" << val1 << " is the larger number" << endl; 
        smallest = val2;
        largest = val1;
    }    
    else {
         cout << val1 << " is the smaller number\n" << val2 << " is the larger number" << endl; 
         smallest = val1;
         largest = val2;
    }
    //sum
    cout << "The sum is: " << val1 + val2 << endl;

    //difference
    cout << "The difference is: " << largest - smallest << endl;
    //product
    cout << "The product is: " << val1 * val2 << endl;
    //ratio
    cout << "The ratio is: " << largest / (double)smallest << ":1" << endl;


    return 0;
}

