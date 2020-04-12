#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    string previous = "";
    string current;
    int counter = 0;
    while(cin >> current) {
        if(previous == current) {
            cout << "repeated word: " << current << endl;
            cout << "total number of repeated words: " << ++counter << endl;
        }
        previous = current;
    }
    return 0;
}
