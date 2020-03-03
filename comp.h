#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
using namespace std;
class Comple{
private:
    double pr;
    double pi;
public:
    Comple()
    {
        pr=0;
        pi=0;

    }
    Comple(double d)
    {
        pr=d;
        pi=0;


    }



    Comple Creat(const Comple z=Comple(),double r=0,double i=0)
    {
        pr=z.pr+r+i;
        pi=z.pi+r+i;

    }
    ~Comple()
    {
        pr=0;
        pi=0;
    }
    operator=(const Comple &A);
    operator=(double d);
    friend ostream &operator<<(ostream &out, const Comple &c);
    friend istream &operator>>(istream &in, Comple &c);
    Comple operator+(const Comple &z);
    Comple operator+(double z);

    Comple operator+=(const Comple &z);
    Comple operator+=( double z);

    Comple operator-=(const Comple &z);
    Comple operator-=( double z);

    Comple operator*(const Comple &z);
    Comple operator*(double z);

    Comple operator/(const Comple &z);
    Comple operator/(double z);

    Comple operator-(const Comple &z);
    Comple operator-();
    Comple operator-(double z);
    int operator!=(const Comple &z);
    double abs();

};

