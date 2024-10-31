#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main() {
    double a;
    double b;
    double hype = 0.00;
    cout<<"Enter side a: ";
    cin>>a;
    cout<<"Enter side b: ";
    cin>>b;
    hype = sqrt(pow(a,2)+pow(b,2));
    cout<<"Hypotenuse "<<hype<<endl;
    return 0;
}
