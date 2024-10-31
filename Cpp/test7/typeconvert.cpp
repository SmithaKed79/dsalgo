#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main() {
    int x = 3.14;//implicit
    double y = (int)3.14;//explicit conversion
    char z = 100;
    cout<<z<<endl;//prints d
    cout<<(char)100<<endl;
    cout<<x<<" "<<y<<endl;

    int num =10;
    int tot = 100;
    //double percent = num/tot *100; //prints 0 because treats as int
    double percent = (double)num/tot *100;
    cout<<percent<<endl;
    return 0;
}