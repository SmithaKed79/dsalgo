#include <iostream>
#include <vector>

/*using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::sort;*/
using namespace std;

/*****************Min Max without sorting with arr and vector***************/
void minmax(vector<int> &arr) {
    int min,max =0;
    for(int i = 0;i<arr.size();i++) {
        if(min>arr[i]) {
            min = arr[i];
        }
        if(max<arr[i]) {
            max = arr[i];
        }
    }
    cout<<"Minimum element is "<<min<<endl;
    cout<<"Maximum element is "<<max<<endl;
}

/*void minmaxarr(int arr[], int size) {
    int min = arr[0],max = arr[0];
    //int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 1;i<size;i++) {
        if(min>arr[i]) {
            min = arr[i];
        }
        if(max<arr[i]) {
            max = arr[i];
        }
    }
    cout<<"Minimum element is "<<min<<endl;
    cout<<"Maximum element is "<<max<<endl;
}*/

int main() {
    vector <int>arr;
    //int arr[10];
    cout<<"Enter space separated list of numbers \n";
    int x=0;
    for(int i=0;i<10;i++){
    cin>>x;
    arr.push_back(x);
    //arr[i] = x;
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    minmax(arr);
    //minmaxarr(arr, size);
    return 0;
}
/******************************************************/
