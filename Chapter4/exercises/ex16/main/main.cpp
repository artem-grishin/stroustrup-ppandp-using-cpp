#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    vector<int> vi {2, 4, 1, 3, 5, 4, 2, 3, 4, 6, 7, 69, 1};

//    int min {vi[0]}, max {vi[0]}, temp {0};
//    for (auto i : vi)
//    {
//         if (min > i)
//         {
//             max = min;
//             min = i;
//         }
//         else
//         {

//         }
//    }


    bool b = 0; cout << b << endl;
    int i = b; cout << i << endl;
    i = 3.14; cout << i << endl;
    double pi = i; cout << pi << endl;
    unsigned char c = -1; cout << c << endl;
    signed char c2 = 256; cout << c2 << endl;
    signed char c3 = 0; cout << c3 << endl;







    qFatal("\n\nGoodbye\n\n");
    return a.exec();
}
