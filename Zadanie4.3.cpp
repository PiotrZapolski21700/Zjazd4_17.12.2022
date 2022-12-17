#include <iostream>
using namespace std;

int main() {

    int x = 10;
    int y = 10;
    int array[10][10];

    for (int column = 0; column < x; column++) {
        for (int row = 0; row < x; row++) {
            if(column == 0){
                array[column][row] = row;
            }
            else if(column == 1){
                array[column][row] = row+row;
            }
            else if(column == 2){
                array[column][row] = row*row;
            }
            else if(column == 3){
                array[column][row] = row+column;
            }
            else if(column == 4){
                array[column][row] = row-column;
            }
            else{
                array[column][row] = 0;
            }
        }
    }

    cout << "Zawartosc tablicy: " << endl;

    for (int row = 0; row < x; row++) {
        for (int column = 0; column < x; column++) {
            cout << array[column][row];
            cout << "  ";
        }
        cout << endl;
    }


    return 0;
}