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

    cout << "First element, " << myArray[0] << ", is considered sorted\n";
    cout << "--------------------------------\n";


    for (int i = 1; i < n; i++) {
        int key = myArray[i];
        cout << "Key is " << key << ", comparing to elements to the left\n";
        int j = i - 1;

        print_array(myArray, n);
        while (j >= 0 && myArray[j] > key) {
            cout << myArray[j] << " is greater than " << key << ", moving it to the right\n";
            myArray[j + 1] = myArray[j];
            j = j - 1;
        }
        if (key == myArray[j + 1])
            cout << "Key is already in the correct position\n";
        else{
            cout << "Inserting key " << key << " at index " << j + 1 << "\n";
            myArray[j + 1] = key;
        }

        cout << "--------------------------------\n";
        
        print_array(myArray, n);
    }

    print_array(myArray, n);

    return 0;
}

