#include <iostream>
using namespace std;
const int X=9;
const int Y=7;
int main() {
    char game_space[X][Y];
    int x, y;
    char cx, cy;
    for (x=0; x<X; x++){
        for (y=0; y <Y; y++){
            game_space[x][y] = y;
        }
    }
    bool loop_end = false;
    int xin, yin;
    do {
        cout << "1 2 3 4 5 6 7 8 9" << endl;
        for (y = 0; y < Y; y++) {
            cout << (char) ('A' + y) << " ";
            for (x = 0; x < X; x++) {
                cout << " " << game_space[x][y];
            }
            cout << endl;
        }
        cin >> cx >> cy;
        xin = cx - '1';
        yin = cy - 'A';
        if (xin>=0 && xin<9 && yin>=0 && yin < 7){
            game_space[xin][yin] = 'x';
        } else {
            loop_end = true;
        }
        }while (!loop_end);
    }


