#include <iostream>

using namespace std;


void print_array(int arr[]) {
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}


int main() {
    int myArray[] = { 31, 25, 39, 48, 13, 30, 26, 50, 21, 21};
    int n = sizeof(myArray) / sizeof(myArray[0]);
    int indexOfLastUnsortedElement = n - 1;

    bool sorted;
    do {
        sorted = true
        for (int i = 0; i <= indexOfLastUnsortedElement; i++) {
            if (myArray[i] > myArray[i + 1]) {
                swap(myArray[i], myArray[i + 1]);
                sorted = false;
            }
        }
        print_array(myArray);
        indexOfLastUnsortedElement--;
    } while (sorted == false);

    print_array(myArray);

    return 0;
}

