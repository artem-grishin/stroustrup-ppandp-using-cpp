#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace  std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    vector<int> v_i;
    vector<int> primes {2};
    int counter {0};
    //populate vector
    for (int i = 0; i < 1000; i++)
    {
       v_i.push_back (i + 1);
    }
    for (vector<int>::size_type i = 3; i < v_i.size(); i++)
    {
        bool isPrime = true;
        for (vector<int>::size_type j = 2; j < (vector<int>::size_type) v_i[i]; j++)
        {
            if (v_i[i] % j == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime)
        {
            if (counter == 101)
            {
                break;
            }
            primes.push_back (v_i[i]);
            ++counter;
        }
    }
    for (auto i : primes)
    {
        cout << i << "\n";
    }
    cout << primes.size() << "\n";

//    for (auto i : v_i)
//    {
//        for (vector<int>::size_type j = 2; j < i; j++)
//        {

//        }
//    }
//    qInfo() << "Here are all the prime numbers between 1 - 100: \n\n";
//    for (auto i : primes)
//    {
//        cout << i << "\n";
//    }
    qFatal("\nGoodbye\n");
    return a.exec();
}
