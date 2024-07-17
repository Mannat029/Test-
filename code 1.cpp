/Write program to display the array element.
#include <iostream>
using namespace std;

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int arraySize = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << endl;
    }

    return 0;
}
