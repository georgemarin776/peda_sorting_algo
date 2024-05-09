#include <iostream>

using namespace std;


void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}


int main() {
    int myArray[] = { 31, 25, 39, 48, 13, 30, 26, 50, 21, 21};
    int n = sizeof(myArray) / sizeof(myArray[0]);

    cout << "Array before sorting:\n";
    print_array(myArray, n);
    cout << "--------------------------------\n";

    for (int i = 0; i < n - 1; i++) {
        int indexOfSmallestElement = i;
        for (int j = i + 1; j < n; j++) {
            if (myArray[j] < myArray[indexOfSmallestElement]) {
                indexOfSmallestElement = j;
            }
        }
        cout << "Starting pass from index " << i << "\n";
        cout << "Smallest element is " << myArray[indexOfSmallestElement] << " at index " << indexOfSmallestElement << "\n";
        if (indexOfSmallestElement != i) {
            cout << "Slotted " << myArray[indexOfSmallestElement] << " into position " << i << "\n";
            swap(myArray[i], myArray[indexOfSmallestElement]);
        }
        else {
            cout << "No need to swap, " << myArray[i] << " is already in the correct position\n";
        }
        print_array(myArray, n);
        cout << "--------------------------------\n";
    }

    print_array(myArray, n);

    return 0;
}

