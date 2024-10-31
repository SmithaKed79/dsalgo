#include <iostream>
#include <vector>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::getline;
using std::string;
using std::stringstream;
using std::swap;

void printArr(vector<int> arr);

void insertionsort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArr(vector<int> arr) {
    for (int n : arr) {
        cout << n << " ";
    }
    cout<<endl;
}

int main(void) {
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
    printArr(arr);
    insertionsort(arr);
    printArr(arr);
    return 0;
}