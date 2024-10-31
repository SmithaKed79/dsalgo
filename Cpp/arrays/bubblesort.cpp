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
// optimizing ---have a isSwapped check flag
void bubblesort(vector<int> &arr) {
    int size = arr.size();
    bool isSwapped;
    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j< size - i -1; j++) {
            isSwapped = false;
            if(arr[j]>arr[j+1]) {
                swap(arr[j+1], arr[j]);
                isSwapped = true;
            }
        }
        if(isSwapped == false) break;
        printArr(arr);
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
    bubblesort(arr);
    printArr(arr);
    return 0;
}