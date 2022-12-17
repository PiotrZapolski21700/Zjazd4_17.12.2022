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

    int max_count = 0;
    int max_freq;

    for (int i = 0; i < rows_num; i++) {
        int count = 0;
        for (int j = 0; j < rows_num; j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }

        if (count > max_count) {
            max_count = count;
            max_freq = array[i];
        }
    }
    cout << endl << "Najczestszy element tej tablicy to: " << max_freq;

    return 0;
}