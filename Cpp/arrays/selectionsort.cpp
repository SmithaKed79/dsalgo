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

void selectsort(vector<int> &arr){
    int size = arr.size();
    int pos;
    for(int i=0; i<size -1; i++) {
        pos =i;
        for(int j=i+1;j<size;j++) {
            if(arr[pos]>arr[j]){
                pos = j;
            }
        }
        swap(arr[i], arr[pos]);
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
    selectsort(arr);
    printArr(arr);
    return 0;
}