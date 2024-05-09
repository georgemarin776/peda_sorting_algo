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
    int indexOfLastUnsortedElement = n;

    print_array(myArray, n);

    bool sorted;
    do {
        sorted = true;
        for (int i = 0; i < indexOfLastUnsortedElement - 1; i++) {
            if (myArray[i] > myArray[i + 1]) {
                cout << "Swapping " << myArray[i] << " and " << myArray[i + 1] << "\n";
                swap(myArray[i], myArray[i + 1]);
                print_array(myArray, n);
                sorted = false;
            }
        }
        cout << "Array at end of pass:\n";
        print_array(myArray, n);
        cout << "--------------------------------\n";
        indexOfLastUnsortedElement--;
    } while (sorted == false);

    print_array(myArray, n);

    return 0;
}

