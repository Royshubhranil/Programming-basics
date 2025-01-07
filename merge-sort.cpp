#include <iostream>
using namespace std;

void merge_arr(int *arr, int start, int mid, int end) {
    // Find the left array size
    int n1 = mid - start + 1;
    // Find the right array size
    int n2 = end - mid;
    // Create temporary arrays for copying values
    int *left_arr = new int[n1];
    int *right_arr = new int[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) {
        left_arr[i] = arr[start + i];  // Corrected indexing
    }
    for (int i = 0; i < n2; i++) {
        right_arr[i] = arr[mid + 1 + i];  // Corrected indexing
    }

    int i = 0, j = 0, k = start;
    while (i < n1 && j < n2) {
        if (left_arr[i] <= right_arr[j]) {
            arr[k] = left_arr[i];  // Copying back to original array
            i++;
        } else {
            arr[k] = right_arr[j];  // Copying back to original array
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left_arr, if any
    while (i < n1) {
        arr[k] = left_arr[i];  // Copying back to original array
        i++;
        k++;
    }

    // Copy the remaining elements of right_arr, if any
    while (j < n2) {
        arr[k] = right_arr[j];  // Copying back to original array
        j++;
        k++;
    }

    // Free the allocated memory
    delete[] left_arr;
    delete[] right_arr;
}

void merge_sort(int *arr, int start, int end) {
    if (start >= end) {
        return;
    }
    int mid = start + (end - start) / 2;
    // Left part merge sort
    merge_sort(arr, start, mid);
    // Right part merge sort
    merge_sort(arr, mid + 1, end);
    // Merge both arrays
    merge_arr(arr, start, mid, end);
}

int main() {
    int arr[5] = {45, 32, 13, 35, 7};
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]);
    merge_sort(arr, start, end - 1);
    for (int i = 0; i < end; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
