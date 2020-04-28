#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::clog;
using std::endl;
using std::string;
using std::vector;
using std::exception;
using std::runtime_error;

void error (string s)
{
    throw runtime_error (s);
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    vector<int> nums;
    qInfo() << "Enter a series of integers: (enter 0 when finished entering) ";
    int sum {0};
    int num;
    bool is_continue = true;
    cin >> num;
    while (is_continue)
    {
        if (cin.fail())
        {
            error("Incorrect input => not an int\n\nGoodbye\n\n");
        }
        else if (num == 0)
        {
            //finishes input process
                is_continue = false;
        }
        else
        {
            //populate vector
            nums.push_back(num);
            cin >> num;
        }
    }

    cout << "\n" << endl;
    qInfo() << "Please enter the number of values you want to sum.";
    qInfo() << "You can enter between 1 and " << nums.size() << "integers to sum up";
    int v_size = nums.size();
    int n {0};
    cin >> n;
    if (n < 1 || n > v_size)
    {
        error("Incorrect range for number of values to sum\n\nGoodbye\n\n");
    }
    for (int i = 0; i < n; ++i)
    {
        sum += nums[i];
    }
    qInfo() << "The sum is for " << n << "integers is:" << sum;

    qFatal("\n\nGoodbye\n\n");
    return a.exec();
}
