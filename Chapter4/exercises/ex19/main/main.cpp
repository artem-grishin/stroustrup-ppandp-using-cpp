#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using std::cin;
using std::cout;
using std::cerr;
using std::vector;
using std::string;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    vector<string> names;
    vector<int> scores;
    string name {""} ;
    int score {0};
    bool is_first = true;
    qInfo() << "Enter a name followed by a score";
    cin >> name >> score;
    while (name != "NoName" && score != 0)
    {
        if (is_first)
        {
            names.push_back (name);
            scores.push_back (score);
            is_first = false;
        }
        else
        {
            for (auto i : names)
            {
               if (name == i)
               {
                   cerr << "Name entered twice.";
                   qFatal("\n\nGoodbye\n\n");
               }
            }
            names.push_back (name);
            scores.push_back (score);
        }
        cin >> name >> score;
    }

    for (vector<int>::size_type i = 0; i < names.size(); ++i)
    {
       cout << names[i] << " " << scores[i] << "\n";
    }

    qFatal("\n\nGoodbye\n\n");
    return a.exec();
}
