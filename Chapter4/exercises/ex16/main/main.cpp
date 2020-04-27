#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;

int main (int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    vector<int> vi {2, 4, 1, 3, 5, 4, 2, 3, 4, 6, 7, 69, 1, 1, 2, 2, 2, 2, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> vm (100);
    int min {vi[0]}, max {vi[0]}, mode {0};
    for (auto i : vi)
    {
        //find min
        if (i < min)
        {
            min = i;
        }
        //find max
        if (i > max)
        {
           max = i;
        }
//        temp = i;
        ++vm[i];
    }
//    for (auto i : vm)
//    {
//        qInfo() << "Test Info --------------------------------------------------";
//        qInfo() << i;
//    }
    int counter_max {vm[0]};
    int index_counter {0};
    int index {0};
    for (auto i : vm)
    {
        if (i != 0 && i > counter_max)
        {
            counter_max = i;
//            index_counter = index;
            mode = index;
        }
        ++index;
    }
//    mode = vm[index_counter];
    //print output
    qInfo() << "Original List of Numbers: ";
    for (auto i : vi)
    {
        cout << i;
    }
    cout << endl;
    qInfo() << "Min is: " << min;
    qInfo() << "Max is: " << max;
    qInfo() << "Mode is:" << mode << "at" << counter_max << "times";






    qFatal("\n\nGoodbye\n\n");
    return a.exec();
}
