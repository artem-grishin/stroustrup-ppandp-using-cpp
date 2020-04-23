#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Enter two numbers: ";
    double num1 = 0;
    double num2 = 0;
    cin >> num1 >> num2;
    qInfo() << "Enter the operation you would like to perform...";
    qInfo() << "You can choose => + , - , * , / ";
    char op = ' ';
    cin >> op;
    if (op == '+')
    {
        qInfo() << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2;
    }
    else if (op == '-')
    {
        qInfo() << "The difference of " << num1 << " and " << num2 << " is " << num1 - num2;
    }
     else if (op == '*')
    {
        qInfo() << "The multiplication of " << num1 << " and " << num2 << " is " << num1 * num2;
    }
      else if (op == '/')
    {
        qInfo() << "The division of " << num1 << " and " << num2 << " is " << num1 / num2;
    }
    else
    {
        qInfo() << "Incorrect entry...";
        qFatal("\nGoodbye\n");
    }



    qFatal("\nGoodbye\n");
    return a.exec();
}
