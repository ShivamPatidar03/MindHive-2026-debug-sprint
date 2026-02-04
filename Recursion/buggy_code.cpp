// MindHive 2026 - Debug Sprint
// Q3: Recursive Heap Reconstruction and Sort

#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i;        
    int right = 2 * i + 1;   

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[n], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    // Build heap
    for (int i = n / 2; i >= 0; i--) {  
        heapify(arr, n, i);
    }

    // Extract elements
    for (int i = n + 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 2);
    }
}

int main() {
    int arr[] = {9, 4, 7, 1, 3, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    cout << "Sorted Array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
