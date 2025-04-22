#include <iostream>
using namespace std;

void copyArray(int original[], int copy[], int size) {
    for(int i = 0; i < size; i++) {
        copy[i] = original[i];
    }
}

int main() {
    int original[] = {10, 20, 30, 40, 50};
    int copy[5];

    copyArray(original, copy, 5);

    cout << "original array: ";
    for(int i = 0; i < 5; i++) {
        cout << original[i] << " ";
    }
    cout << endl;
    cout << "copy array: ";
    for(int i = 0; i < 5; i++) {
        cout << copy[i] << " ";
    }
    return 0;
}
