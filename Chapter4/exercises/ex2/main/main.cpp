#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    vector<int> v;
    for (int i = 0; i < 100; i++)
    {
        v.push_back (i + 1);
    }
//    double median = 0;
    if (v.size() % 2 == 0)
    {
        double median_altered = ( (v.size() / 2) + ( (v.size() / 2) - 1) ) / 2.0;
        qInfo() << "Since length of vector is even, the altered median is: " << median_altered;
    }
    else  //we have a true median b/c size is odd which means we have a middle number
    {
       qInfo() << "Since length of vector is odd, the median is: " << v[v.size() / 2];
    }
    qFatal("\n\nGoodbye\n\n");
    return a.exec();
}
