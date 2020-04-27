#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;

int main (int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    string s = "here is a sequence of a string for us to test aaaaaaaaaaaaaaaaaaaaaa";
    int min {0}, max {0};
    char ch_mode = 65;
    for (int i = 0; i < (int) s.size(); ++i)
    {
        if (s[i] >= 65 && s[i] <= 122) // is character between A(uppercase) and z(lowercase)
        {
            if (i == 0)
            {
                min = s[i];
                max = s[i];
            }
            if (s[i] < min)
            {
                min = s[i];
            }
            if (s[i] > max)
            {
                max = s[i];
            }
        }
    }
    //find mode
    vector<char> v_mode (122); //create 122 0 values
    for (int i = 0; i < (int) s.size(); ++i)
    {
        if (s[i] >= 65 && s[i] <= 122) // is character between A(uppercase) and z(lowercase)
        {
            ++v_mode[s[i]];
        }
    }
    int index = 0;
    int mode = v_mode[0];
    int mode_counter = 0;
    for (int i : v_mode)
    {
        if (i != 0 && i > mode_counter)
        {
           mode_counter = i;
           mode = index;
        }
        ++index;
    }
    qInfo() << "The smallest character lexigraphically is:" <<(char) min;
    qInfo() << "The largest character lexigraphically is:" << (char) max;
    qInfo() << "The character" << (char) mode << "what entered" << mode_counter << "times.";
    qFatal("\n\nGoodbye\n\n");
    return a.exec();
}
