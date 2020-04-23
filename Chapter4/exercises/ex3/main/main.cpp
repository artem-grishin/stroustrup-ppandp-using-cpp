#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    vector<double> v {1.2, 99.8, 54.6, 23.5, 2.21, 16.68};
    double sum = 0;
    for (double i : v)
    {
       sum += i;
    }
    qInfo() << "The sum is: " << sum;

    //sort smallest to largest
    sort(v.begin (), v.end ());
    for (double i : v)
    {
        qInfo() << i;
    }
    qInfo() << "The distance between the greatest and smallest distance is: " << v[v.size() - 1] - v[0];

    //mean distance between two neighboring cities is
    int counter = 0;
    double mean_sum = 0;
    for (double i = 0; i < v.size()-1; i++)
    {
       mean_sum += v[i+1] - v[i];
       ++counter;
    }
    double mean = mean_sum / counter;
    qInfo() << "The mean distance between two neighboring cities is: " << mean;



    qFatal("\n\nGoodbye\n\n");
    return a.exec();
}
