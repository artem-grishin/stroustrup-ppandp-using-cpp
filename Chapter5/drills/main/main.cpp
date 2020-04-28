#include <QCoreApplication>
#include <QDebug>
#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::clog;
using std::string;
using std::vector;
using std::exception;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    try
    {
        cin << "success\n";
        return 0;
    }
    catch (exception& e)
    {
       cerr << "error: " << e.what() << "\n";
       return 1;
    }
    catch(...)
    {
        cerr << "Oops: unknown exception!\n";
        return 2;
    }

    qFatal("\n\nGoodbye\n\n");
    return a.exec();
}
