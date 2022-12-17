#include <iostream>
using namespace std;

int main() {

    int rows_num;
    cout << "Podaj liczbe elementow:";
    cin >> rows_num;
    int array[rows_num];

    for (int i = 0; i < rows_num; i++) {
        cout << "Podaj liczbe " << i+1 << ":";
        cin >> array[i];
    }

    int biggest = 0;

    for(int n = 0; n < rows_num; n++) {
        if(biggest < array[n]){
            biggest = array[n];
        }
    }

    cout << endl << "Najwiekszy element tej tablicy to: " << biggest;

    return 0;
}