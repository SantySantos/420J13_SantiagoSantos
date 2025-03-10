#include <iostream>
#include <Windows.h>

using namespace std;

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {

    LARGE_INTEGER start, end, freq;
    QueryPerformanceFrequency(&freq);
    QueryPerformanceCounter(&start);
    
    int arr[] = {1, 3, 5, 7, 9, 11, 25, 25, 4, 4, 6, 7 , 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 25;
    int index = binarySearch(arr, 0, n - 1, target);
    if (index != -1) cout << "Found at index: " << index << endl;
    else cout << "Not found" << endl;
    
    QueryPerformanceCounter(&end);
    double elapsedTime = static_cast<double>(end.QuadPart - start.QuadPart) / freq.QuadPart;
    cout << "Execution time: " << elapsedTime << " seconds" << endl;
    
    return 0;
}