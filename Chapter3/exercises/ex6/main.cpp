#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int val1, val2, val3, low, mid, high;
    //int same1, same2;
    cout << "Enter three integer values: " << endl;
    cin >> val1 >> val2 >> val3;    
    //10,4,6 => 4,6,10
    // 4,5,4 => 4,4,5


    //find low
    if(val1 <= val2 && val1 <= val3) {
        low = val1;
    }
    else if(val2 <= val1 && val2 <= val3) {
        low = val2;
    }
    else {
        low = val3;
    }
    //find mid & high 
    if(low == val1) {
        if(val2 <= val3){
            mid = val2;
            high = val3;
        }
        else {
            mid = val3;
            high = val2;
        }
    }
    if(low == val2) {
        if(val1 <= val3){
            mid = val1;
            high = val3;
        }
        else {
            mid = val3;
            high = val1;
        }
    }
    if(low == val3) {
        if(val1 <= val2){
            mid = val1;
            high = val2;
        }
        else {
            mid = val2;
            high = val1;
        }
    }

    cout << "Here are the numbers smallest to largest: " << low << ", " << mid << ", " << high << endl;

    return 0;
}
