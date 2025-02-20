#include<iostream>
using namespace std;

class Complex
{
    public:
        double real;
        double imag;
        Complex(double r=0,double i=0)
        {
            real = r;
            imag = i;
        }
};

Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main()
{
    Complex com1(1.1,2.2),com2(3.3,4.4),total1,total2;
    total1 = operator+(com1,com2);
    cout<<"real1="<<total1.real<<" "<<"imag1="<<total1.imag<<endl;
    total2 = com1 + com2;
    cout<<"real2="<<total2.real<<" "<<"imag2="<<total2.imag<<endl;
    return 0;
}