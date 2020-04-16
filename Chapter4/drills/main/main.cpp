#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    double num1, temp;
    double min, max;
    string unit_measure, s_min, s_max, s_temp;
    int counter = 0;
    vector<double> v_d;

    qInfo() << "Enter a number and its abbreviated measurement unit"
               "\n\nonly units allowed are => cm(centimeters), m(meters),  in(inches), or ft(feet)"
               "\n\n(space or enter must follow number, then enter abbreviated measurement unit: ) ";
    while (cin >> num1 >> unit_measure)
    {
        //preserve original entry as a string before conversion to cm so we can output original entry
        s_temp = to_string(num1) + unit_measure;
        //convert all to cm so we can compare values
        if (unit_measure == "cm")
        {
            num1 *= 1; // 1cm = 1cm
//            cout << num1 << "cm\n";
        }
        else if (unit_measure == "m")
        {
            num1 *= 100; // 1m = 100cm
//            cout << num1 << "cm\n";
        }
        else if (unit_measure == "in")
        {
            num1 *= 2.54; // 1in = 2.54cm
//            cout << num1 << "cm\n";
        }
        else if (unit_measure == "ft")
        {
            num1 *= 12; // convert ft to inches
            num1 *= 2.54; // 1ft = 2.54cm * 12 inches
//            cout << num1 << "cm\n";
        }
        else
        {
            qInfo() << "Entry invalid...try again";
            qInfo() <<  "Enter another number";
            continue;
        }
        //populate vector with converted values to cm so we can compare them
        v_d.push_back (num1);
       // put in first value and start loop over
        if (counter == 0)
        {
//            min = v_d[0];
//            max = v_d[0];
//            s_min = v_s[0];
//            s_max = v_s[0];
            min = num1;
            max = num1;
            s_min = s_temp;
            s_max = s_temp;
//            qInfo() << min;
//            qInfo() << max;
//            cout << s_min << "\n";
//            cout << s_max << "\n";
            ++counter;
            continue;
        }

        //swap here
        temp = num1; //this num1 is already converted to cm
//        cout << "Test here -------------------------------------" << num1 << "\n";
        if (temp == min || temp == max)
        {
            cout << "You've entered a duplicate number.\nNothing has changed.\n";
        }
        else if (temp < min)
        {
            min = temp;
            s_min = s_temp; //this is the last entry in string form before the conversion to cm
            cout << s_min << " is smallest\n" << min << "\n";
            cout << s_max << " is biggest\n\n" << max << "\n";
        }
        else
        {
            max = temp;
            s_max = s_temp;
            cout << s_min << " is smallest\n" << min << "\n";
            cout << s_max << " is biggest\n\n" << max << "\n";
        }
        ++counter;
        qInfo() << "Enter another number: ";
    }

    //output sum of inputs and number of entries
    cout << "The number of values entered are: " << v_d.size() << "\n";

    //find sum of values entered
    double sum = 0;
    for (int i : v_d)
    {
        sum += i;
    }
    //change from cm to meters and output
    cout << "The sum is: " << sum / 100 << " meters.\n";

    //sort then output all values
    sort(v_d.begin(), v_d.end());
    for (double i : v_d)
    {
        cout << i  << " meters \n";
    }
    qFatal("\n\nGoodbye and Thank You.\n\n");

    return a.exec();
}
