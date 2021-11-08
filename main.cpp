#include <iostream>
using namespace std;
const int MAX = 256;
int main() {
    char input[MAX];
    int  i =0;
    long value = 0;
    cin.getline(input, MAX);
    while(input[i]>='0' && input[i]<='9'){
        value*= 10;
        value += input[i] -'0';
        i++;
    }
    cout << value << endl;
}
