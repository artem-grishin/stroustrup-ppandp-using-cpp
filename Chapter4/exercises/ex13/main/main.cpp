#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    vector<int> vi;
    int n = 0;
    qInfo() << "Enter a number for a max:";
    cin >> n;
    qInfo() << "\n";
    for (int i = 2; i < n; i++)
    {
       vi.push_back (i);
    }
    int k = 0;
        for (vector<int>::size_type j = 2; j <  vi.size(); j++)
        {
            k = 0;
            for (auto i : vi)
            {
                if (i % j == 0 && (vector<int>::size_type)i != j && i != 0)
                {
                    vi[k] = 0;
                }
                ++k;
            }

        }

    for (auto i : vi)
    {
        if (i != 0)
        {
            qInfo() << i;
        }
    }



    qFatal("\nGoodbye\n");
    return a.exec();
}
