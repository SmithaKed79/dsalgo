#include <iostream>
using namespace std;// has a lot of entities which might lead to naming conflict like "data" so avoid using it

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    using std::cout;
    using std::string;//use these instead of using entire namespace std to avoid naming conflicts and also make your code writing easier
    //int x = 0;
    string name = "Smitha Kedila";
    //using namespace first;
    //std::cout<< x<<std::endl;//:: scope resolution
    //std::cout<< first::x<<std::endl;
    //std::cout<<second::x<<std::endl;
    //cout<<first::x<<endl;
    cout<<name<<endl;
    return 0;
}