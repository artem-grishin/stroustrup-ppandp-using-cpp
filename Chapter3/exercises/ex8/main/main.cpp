#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;


bool isEven (int i)
{
    bool isEven = false;
    if (i % 2 == 0)
    {
        isEven = true;
        return isEven;
    }
    return isEven;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Enter an integer: ";
    int num = 0;
    cin >> num;

    if(isEven(num))
    {
        qInfo() << "The number " << num << " is an even number.";
    }
    else
    {
        qInfo() << "The number " << num << " is an odd number.";
    }

    qFatal("\n\n\nGoodbye\n\n\n");
    return a.exec();
}
