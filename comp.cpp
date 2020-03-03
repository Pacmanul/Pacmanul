#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include "comp.h"
#include <math.h>
using namespace std;
    ostream& operator << (ostream &out,const Comple &c)
{   out<<endl;
    out<<"Z=";
    out << c.pr;
    if(c.pi<0)
        out << c.pi << "*i" <<endl;
    else
        if(c.pi>0)
        out << "+" << c.pi << "*i" <<endl;
    return out;
}
    istream &operator>>(istream &in, Comple &c)
    {
        cout<<"Forma este a+b*i"<<endl<<"Introdu numarul: "<<endl;
        cout<<"Partea reala:";
        in>>c.pr;
        cout<<"Partea imaginara:";
        in>>c.pi;
        cout<<endl;


        return in;
    }
    Comple::operator=(const Comple& A)
    {
        pr=A.pr;
        pi=A.pi;

    }
     Comple::operator=(double d)
    {
        pr=d;
        pi=0;

    }
    Comple Comple::operator+(const Comple &z)
    {
        Comple Nr;
        Nr.pr=pr+z.pr;
        Nr.pi=pi+z.pi;
        return Nr;

    }
     Comple Comple::operator+(double z)
    {
        Comple Nr;
        Nr.pr=pr+z;
        Nr.pi=pi;
        return Nr;

    }
     Comple Comple::operator-(const Comple &z)
    {
        Comple Nr;
        Nr.pr=pr-z.pr;
        Nr.pi=pi-z.pi;
        return Nr;

    }
    Comple Comple::operator-(double z)
    {
        Comple Nr;
        Nr.pr=pr-z;
        Nr.pi=pi;
        return Nr;

    }
     Comple Comple::operator-()
    {

        pr=-pr;
        pi=-pi;


    }
    Comple Comple::operator*(const Comple &z)
    {
        Comple Nr;
        Nr.pr=pr*z.pr+(-1)*pi*z.pi;
        Nr.pi=pr*z.pi+pi*z.pr;
        return Nr;

    }
    Comple Comple::operator*(double d)
    {
        Comple Nr;
        Nr.pr=pr*d;
        Nr.pi=pi*d;
        return Nr;

    }
     Comple Comple::operator/(const Comple &z)
    {
        Comple Nr;
        Nr.pr=(pr*z.pr+pi*z.pi)/(z.pr*z.pr+z.pi*z.pi);
        Nr.pi=(z.pr*pi-pr*z.pi)/(z.pr*z.pr+z.pi*z.pi);
        return Nr;

    }
    Comple Comple::operator/(double d)
    {
        Comple Nr;
        Nr.pr=pr/d;
        Nr.pi=pi/d;
        return Nr;

    }
    Comple Comple::operator+=(double d)
    {

        pr+=d;



    }
     Comple Comple::operator+=(const Comple &z)
    {

        pr=pr+z.pr;
        pi=pi+z.pi;


    }
    Comple Comple::operator-=(const Comple &z)
    {

        pr=pr-z.pr;
        pi=pi-z.pi;


    }
     Comple Comple::operator-=(double d)
    {

        pr=pr-d;



    }

    double Comple::abs()
    {
        return sqrt(pr*pr+pi*pi);

    }
    int Comple::operator!=(const Comple &z)
    {
        if(pr==z.pr && pi==z.pi)
            return 0;
        return 1;

    }
