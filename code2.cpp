//write a program to find the  max element from the list
#include <iostream>
using namespace std;

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int arraySize = sizeof(array) / sizeof(array[0]);
    int maxElement = array[0];
    for (int i = 1; i < arraySize; i++) {
        if (array[i] > maxElement) {
            maxElement = array[i];
        }
    }

    cout << "The maximum element in the array is: " << maxElement << endl;

    return 0;
}
