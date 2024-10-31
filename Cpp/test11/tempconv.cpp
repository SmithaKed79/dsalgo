#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    double temp;
    char unit;

    cout<<"Enter unit you want to convert into: ";
    cin>>unit;
    cout<<"Enter temp to be converted to "<<unit<<": ";
    cin>>temp;
    if((unit == 'F') || (unit == 'f')){
        cout<<"The temp in F is "<<(temp*(double)9/5 + 32)<<endl;
    } else if((unit == 'C') || (unit == 'c')) {
        cout<<"The temp in C is "<<((temp-32)*5/(double)9)<<endl;
    }
    return 0;
}