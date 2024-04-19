#include <stdio.h>
#include <stdbool.h>  // Include this header for using bool type

void bubblesort (int ar[],int n );  // Declare the function prototype

int main() {
    int num[10] = {8, 5, 4, 3, 7, 0, 1, 2, 6, 9};
    bubblesort(num,10); //notice the style call function // Call bubblesort function with the array and its size
        return 0;
}


void bubblesort (int arr[],int n )   //notice the style call num  // Declare the function prototype

{   int i, j, temp;
    for (i = 10 - 2; i >= 0; i--) { // Loop from the second last element backwards
        bool swaped = false; // Corrected declaration
        for (j = 0; j <= i; j++) { // Loop through elements to swap
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaped = true; // Set swaped to true if a swap occurred
            }
        }
        if (!swaped) // If no swaps occurred, break the loop
            break;
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

}