#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
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

    qInfo() << "Now enter a score and the corresponding name will print: ";
    cin >> score;
    bool is_found {false};
    int index {0};
    while (score != 0)
    {
        for(vector<int>::size_type i = 0; i < scores.size(); ++i)
        {
           if (score == scores[i])
           {
              is_found = true;
              break;
           }
           ++index;
        }
        if (is_found)
        {
              cout << scores[index] << " " << names[index] << endl;
        }
        else
        {
               qInfo() << "Socres not found.";
        }
        index = 0;
        is_found = false;
        qInfo() << "Enter another score to look up its corresponding name: ";
        cin >> score;
    }

    qFatal("\n\nGoodbye\n\n");
    return a.exec();
}
