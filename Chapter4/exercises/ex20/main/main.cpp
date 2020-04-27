#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using std::cin;
using std::cout;
using std::cerr;
using std:: endl;
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

    qInfo() << "Now enter a name and the corresponding score will print: ";
    cin >> name;
    bool is_found {false};
    int index {0};
    while (name != "NoName")
    {
        for(vector<int>::size_type i = 0; i < names.size(); ++i)
        {
           if (name.compare(names[i]) == 0)
           {
              is_found = true;
              break;
           }
           ++index;
        }
        if (is_found)
        {
              cout << names[index] << " " << scores [index] << endl;
        }
        else
        {
               qInfo() << "Name not found.";
        }
        index = 0;
        is_found = false;
        qInfo() << "Enter another name to look up its corresponding score: ";
        cin >> name;
    }

    qFatal("\n\nGoodbye\n\n");
    return a.exec();
}
