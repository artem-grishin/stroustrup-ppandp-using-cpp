#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using namespace std;

struct Money
{
    int penn, nick, dime, quart, halfDoll, wholeDoll;

    void setPenn ()
    {
        qInfo("Enter how many pennies you have: ");
        cin >> penn;
    }
    void setNick ()
    {
        qInfo("Enter how many nickels you have: ");
        cin >> nick;
    }
    void setDime ()
    {
        qInfo("Enter how many dimes you have: ");
        cin >> dime;
    }
    void setQuart ()
    {
        qInfo("Enter how many quarters you have: ");
        cin >> quart;
    }
    void setHalfDoll ()
    {
        qInfo("Enter how many half dollars you have: ");
        cin >> halfDoll;
    }
    void setWholeDoll ()
    {
        qInfo("Enter how many whole dollars you have: ");
        cin >> wholeDoll;
    }

    double getTotalCents()
    {
        return penn + (nick * 5) + (dime * 10) + (quart * 25) + (halfDoll * 50) + (wholeDoll * 100);
    }
    int getWholeDollars()
    {
        return getTotalCents() / 100;
    }
    int getLooseChange()
    {
        return (int)getTotalCents() % 100;
    }
    string thttps://my.ine.com/course/ine-ccna-rs-cisco-ios-infrastructure-services/5fbc616f-757d-46bf-bdc6-8517d267307eoString()
    {
        if (penn == 1) qInfo() << "You have one" << penn << " penny.";
        else qInfo() << "You have " << penn << " pennies.";

        if (nick == 1) qInfo()  << "You have one" << nick << " nickel.";
        else qInfo() << "You have " << nick << " nickels.";

        if (dime == 1) qInfo() << "You have one" << dime << " dime.";
        else qInfo() << "You have " << dime << " dimes.";

        if (quart == 1) qInfo() << "You have one" << quart << " quarter.";
        else qInfo() << "You have " << quart << " quarters.";

        if (halfDoll == 1) qInfo() << "You have one" << halfDoll << " half dollar.";
        else qInfo() << "You have " << halfDoll << " half dollars.";

        if (wholeDoll == 1) qInfo() << "You have one" << wholeDoll << " whole dollar.";
        else qInfo() << "You have " << wholeDoll << " whole dollars.";

        return " ";
    }
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Money m;
    m.setPenn();
    m.setNick();
    m.setDime();
    m.setQuart();
    m.setHalfDoll();
    m.setWholeDoll();

    m.toString();
    cout << "\n";
    qInfo() << "The value of all your coins is" << m.getTotalCents() << "cents.";
    cout << "You have $" << m.getWholeDollars() << "." << m.getLooseChange() << endl;

    qFatal("\n\nGoodbye\n\n");
    return a.exec();
}
