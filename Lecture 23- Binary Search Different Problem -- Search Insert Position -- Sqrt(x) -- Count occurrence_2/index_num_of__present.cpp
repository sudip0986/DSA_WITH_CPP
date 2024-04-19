#include <iostream>
using namespace std;

int main() {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // search the index of 4
    int start = 0, end = 9; // Initialize 'end' with the last index of the array

    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == 4) {
            cout << "The index of 4 is " << mid << endl; // Output 'mid' when 4 is found
            break;
        } else if (arr[mid] < 4)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return 0;
}
