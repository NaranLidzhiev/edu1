#include <iostream>
using namespace std;
#include <stdlib.h>
#include <string.h>
const int MAX = 11;
int main() {
    int source[MAX] = {1,2,3,4,5,6,7,8,23,4,234};
    int target[MAX];
    memcpy(target, source, sizeof(source));
    for (int i =0; i< MAX; i++){
        cout << target[i] << endl;
    }
}
