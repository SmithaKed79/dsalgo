#include <iostream>

float circle(int);
int main() {
    int r = 5;
    std::cout<<"Circumference of circle with radius "<<r<<" is "<<circle(r)<<std::endl;

    return 0;
}

float circle(int r) {
    const float pi = 3.14;
    //pi =0;
    float circumference = 2* pi * r;
    return circumference;
}