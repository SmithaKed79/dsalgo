#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    string name;
    cout<<"Enter your name: ";
    std::getline(cin, name);
    //name.clear();
    //name.empty();
    //name.append("");
    //name.insert(index,"");
    //name.find(' ');
    //name.erase(beginning index, end index);
    if(name.length()> 12){
        cout<<"Your name cant be over 12 chars"<<endl;
    } else {
        cout<<"Welcome "<<name<<"!!!"<<endl;
    }
    return 0;
}