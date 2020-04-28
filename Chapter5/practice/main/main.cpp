#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;

void error (string s)
{
    throw runtime_error (s);
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    bool is_something = false;
    if (!is_something)
    {
        error("this is an error");
    }
    cout << "------------------------------------------------------\n";
    return a.exec();
}
