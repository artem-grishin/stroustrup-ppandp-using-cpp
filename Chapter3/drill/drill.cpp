#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

int main(int argc, char *argv[]) {
    cout << "Enter the name of the person you want to write to: " << endl;
    string first_name = "";
    cin >> first_name;
    cout << "Dear " << first_name << ", " << endl;
    cout << "\tHow are you? I am fine. I miss you." << endl;
    string friend_name = "";
    cout << "Name another friend: " << endl;
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?" << endl;
    char friend_sex = 0;
    cout << "Enter a M or F for the sex of your friend: " << endl;
    cin >> friend_sex;
    if(friend_sex == 'M')
        cout << "If you see " << friend_name << " please ask him to call me." << endl;
    else 
        cout << "If you see " << friend_name << " please ask her to call me." << endl;
    int age = 0;
    cout << "Enter the age of your friend: " << endl;
    cin >> age;
    cout << "I hear you just had a birthday and you " << age << " years old." << endl;
    if(age <= 0 || age >= 110)
        simple_error("you're kidding!");
    if(age < 12)
        cout << "Next year you will be " << age+1 << "." << endl;
    if(age == 17)
        cout << "Next year you will be able to vote" << endl;
    if(age > 70)
        cout << "I hope you are enjoying retirement." << endl;
    cout << "Yours sincerely\n\n" << endl;
    cout << "X __________________ " << endl;
    cout << "Artem Grishin" << endl;
    return 0;
}
