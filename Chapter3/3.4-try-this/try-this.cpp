#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    cout << "Please enter a floating-point value: ";
//    double n; 
    int n;
    cin >> n;
    cout << "n==" << n
        << "\nn+1==" << n+1
        << "\nthree times n==" << n*3
        << "\ntwice n==" << n+n
        << "\nsquared n==" << n*n
        << "\nhalf of n=="<< n/2
        << "\nsquare root of n==" << sqrt(n)
        << '\n';


    return 0;
}

