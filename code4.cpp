/4th
#include <iostream>
using namespace std;

// Function to count multiples of 3 in an array
int divisibleBy3(int array[], int size) {
    if (size < 0) {
        cout << "Invalid Input" << endl;
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            cout << "Invalid Input" << endl;
            exit(1);
        }
    }

    int countMultiplesOf3 = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] % 3 == 0) {
            countMultiplesOf3++;
        }
    }
    return countMultiplesOf3;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Invalid Input" << endl;
        return 1;
    }

    int array[20]; // Define an array with a maximum size of 20
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int result = divisibleBy3(array, n);
    cout << "The count of multiples of 3 in the array is: " << result << endl;

    return 0;
}

