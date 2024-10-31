#include <bits/stdc++.h>
using namespace std;
// Merges two subarrays of arr[].
// First subarray is arr[left..mid]
// Second subarray is arr[mid+1..right]
void merge(vector<int>& arr, int left, int mid, int right) 
{ 
    int n1 = mid - left + 1; int n2 = right - mid; // Create temp vectors 
    vector<int> L(n1), R(n2); // Copy data to temp vectors L[] and R[] 
    for (int i = 0; i < n1; i++) L[i] = arr[left + i]; 
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j]; 
    int i = 0, j = 0; int k = left; // Merge the temp vectors back // into arr[left..right] 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    } // Copy the remaining elements of L[], // if there are any 
    while (i < n1) {
        arr[k] = L[i]; i++; k++;
    } // Copy the remaining elements of R[], // if there are any 
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
} // begin is for left index and end is right index // of the sub-array of arr to be sorted
void mergeSort(vector<int>& arr, int left, int right) {
        if (left >= right) return; 
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
} // Function to print a vector 
void printVector(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " "; 
        cout << endl;
} // Driver code 
int main() {
    vector<int> arr;
    string numbers;
    int x = 0;
    cout<<"Enter space separated numbers for array\n";
    getline(cin, numbers);
    stringstream ss(numbers);
    int num;
    while(ss>>num) {
        arr.push_back(num);
    }
    int size = arr.size();
    printVector(arr);
    mergeSort(arr, 0, size-1);
    printVector(arr);
    return 0;
}