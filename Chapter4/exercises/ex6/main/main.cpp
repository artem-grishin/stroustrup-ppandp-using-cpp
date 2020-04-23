#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <vector>
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    vector<string> v_s {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (vector<int>::size_type i = 0; i < v_s.size(); i++)
    {
        cout << "Here is number " << i << " spelled out => " << v_s[i] << "\n";
        cout << "Here is number " << v_s[i] << " in digit form => " << i << "\n";
        cout << "\n\n";
    }

    qFatal("\nGoodbye\n");
    return a.exec();
}
