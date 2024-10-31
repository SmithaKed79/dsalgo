#include <iostream>

int main () {
    int x;
    x = 5;
    float y = 6.855555;
    double z = 7.2;
    char c = 's';
    std::string s= "smitha";
    bool yes = true;
    //std::cout<<"hello world!!!"<<std::endl; // flush the output buffer
    //std::cout<<"hello world!!!"<<'\n'; //does the same job as endl but does not flush
    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;
    std::cout<<z<<std::endl;
    std::cout<<c<<std::endl;
    std::cout<<s<<std::endl;
    std::cout<<yes<<std::endl;

    return 0; // return 0 means there were no errors, but if 1 is returned there was an error
}