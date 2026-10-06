#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] < arr[mid + 1]) {
            left = mid + 1;
        } 
        else {
            right = mid;
        }
    }
    
    return left;
}

int main() {
    vector<int> arr = {1, 3, 5, 4, 2};
    int peakIndex = peakIndexInMountainArray(arr);
    
    cout << "Peak Index: " << peakIndex << endl;
    cout << "Peak Element: " << arr[peakIndex] << endl;
    
    return 0;
}