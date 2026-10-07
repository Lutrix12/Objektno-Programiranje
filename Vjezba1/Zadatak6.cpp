#include <iostream>

using namespace std;

struct Fraction
{
    int numerator;
    int denominator;

    void reduce()
    {
        int a = numerator;
        int b = denominator;

        while (b != 0)
        {
            int ostatak = a % b;
            a = b;
            b = ostatak;
        }

        //najveci zajednicki djelitelj
        numerator /= a;
        denominator /= a;

        if (denominator < 0)
        {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

    double value()
    {
        return static_cast<double>(numerator) / denominator;
    }

    void print()
    {
        cout << numerator << "/" << denominator;
    }
};



Fraction sum(const Fraction& a, const Fraction& b)
{
    Fraction result;

    result.numerator =a.numerator * b.denominator + b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;

    result.reduce();

    return result;
}


int main()
{
    Fraction a{ 2, 4 };
    Fraction b{ 1, 4 };

    cout << "a = ";
    a.print();

    cout << "\nDecimalna vrijednost a = ";
    cout << a.value() << endl;

    Fraction c{ 6, 8 };

    cout << "c = ";
    c.print();

    c.reduce();

    cout << "\nNakon skracivanja: ";

    c.print();

    Fraction result = sum(a, b);

    cout << "\na + b = ";
    result.print();

    cout << "\nDecimalna vrijednost = ";
    cout << result.value() << endl;

    return 0;
}