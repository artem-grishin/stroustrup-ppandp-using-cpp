#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;

int getNum(string w)
{
    if (w == "one") return 1;
   else if (w == "two") return 2;
   else if (w == "three") return 3;
   else if (w == "four") return 4;
   else return -1;
   return 0;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qInfo() << "Enter a number between 0 through 4 using words like \"one\": ";
    string word;
    cin >> word;

    if (getNum(word) != -1)
    {
        qInfo() << "Your number is: " << getNum(word);
    }
    else
    {
        qInfo() << "Your  number is not a number I know";
    }
    qFatal("\n\nGoodbye\n\n");
    return a.exec();
}
