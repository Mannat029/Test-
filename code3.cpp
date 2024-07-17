/Write a program to find the count of 3 multiples in a given input integer array.
#include <iostream>
using namespace std;

int main() {
    int array[] = {10, 20, 30, 33, 36, 40, 45, 50};
    int arraySize = sizeof(array) / sizeof(array[0]);
    int countMultiplesOf3 = 0;

    for (int i = 0; i < arraySize; i++) {
        if (array[i] % 3 == 0) {
            countMultiplesOf3++;
        }
    }
    cout << "The count of multiples of 3 in the array is: " << countMultiplesOf3 << endl;

    return 0;
}
