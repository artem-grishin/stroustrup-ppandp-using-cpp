#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;

double doMath (char operation, double op1, double op2)
{
   if (operation == '+') return op1 + op2;
   else if (operation == '-') return op1 - op2;
   else if (operation == '*') return op1 * op2;
   else if (operation == '/') return op1 / op2;
   return -1;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    char operation;
    double operand1;
    double operand2;
    qInfo() << "Enter an operation followed by two operands like => + 5 10";
    cin >> operation >> operand1 >> operand2;

    double result = doMath(operation, operand1, operand2);

    if (result != -1) qInfo() << operand1 << operation << operand2 << " = " << result;
    else qInfo() << "Incorrect Input!";

    qFatal("\n\nGoodbye.\n\n");
    return a.exec();
}
