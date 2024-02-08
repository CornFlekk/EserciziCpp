#include <iostream>
using namespace std;

double calcola(double subtot);

const double iva = 0.22;

int main()
{
    double s;
    cout << "Inserisci la tua eta': ";
    cin >> s;

    cout << "il tuo totale e' " << s + calcola(s) << endl;
}

double calcola(double subtot)
{
    return subtot * iva;
}