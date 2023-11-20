#include <iostream>
using namespace std;

int main() {
    const int size = 11;
    int a[size] = {0, 2, 7, 1, 3, 9, 5, 8, 7, 6, 4};

    int i = 0;
    while (i <= size - 1) {
        int min = a[i];
        int loc = i;
        int j = i + 1;

        while (j < size) {
            if (a[j] < min) {
                min = a[j];
                loc = j;
            }
            j = j + 1;
        }

        // Swap elements
        if (loc != i) {
            int swap = a[i];
            a[i] = a[loc];
            a[loc] = swap;
        }

        i = i + 1;
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int k = 0; k < size; ++k) {
        cout << a[k] << " ";
    }

    return 0;
}


