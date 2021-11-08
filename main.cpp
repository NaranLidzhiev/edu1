#include <iostream>
using namespace std;
#include <stdlib.h>
const int MAX = 5;
int main() {
    int field[MAX], dop, help;
    int i, j, k;
    int count = 0;
    srand(56);
    for (i = 0; i < MAX; i++) {
        field[i] = rand() % 100 + 1;
        cout << field[i] << " ";
    }
    cout << endl;
    for (i = MAX-1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            cout << "(" << j << "-" << j + 1 << "):";
            if (field[j] > field[j + 1]) {
                help = field[j];
                field[j] = field[j + 1];
                field[j + 1] = help;
                count ++;
            }
            cout << field[j] << " - " << field[j + 1] << " ";
        }
        if (count == 0)
            break;
        cout << endl << MAX - i << "-й проход цикла завершен: ";
        for (k = 0; k < MAX; k++) {
            cout << field[k] << " ";
        }
        cout << endl;
        count  = 0;
    }
}
