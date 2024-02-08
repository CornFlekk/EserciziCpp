#include <iostream>
#include <stdlib.h>
using namespace std;

int prova(int s1, double s2 = 2);
void stampaArray(int arrLength, int arr[]);
void setArrRandom(int arrLength, int arr[]);
void multArray(int arrLength, int arr[], int m=2);

    int main()
{
    const int arrLength = 10;
    int A[arrLength];
    setArrRandom(arrLength, A); 
    cout << "Il tuo array: ";
    stampaArray(arrLength, A);

    multArray(arrLength, A);
    cout << "Doppio dell'array: ";
    stampaArray(arrLength, A);
}

int prova(int& s1, double s2) {
    return s1 * s2;
}

void setArrRandom(int arrLength, int arr[]) {
    for (int j = 0; j < arrLength; j++)
    {
        arr[j] = rand() % 100;
    }
}

void stampaArray(int arrLength, int arr[])
{
    cout << "[ ";
    for (int j = 0; j < arrLength; j++)
    {
        cout << arr[j] << " ";
    }
    cout << "]\n";
}

void multArray(int arrLength, int arr[], int m) {
    for (int j = 0; j < arrLength; j++)
    {
        arr[j] *= m;
    }
}