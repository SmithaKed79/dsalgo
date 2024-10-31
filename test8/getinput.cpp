#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::getline;
using std::endl;

int main() {
    string name;
    int age;

    //cout<<"how old are you?"<<endl;
    //cin>>age;

    cout<<"how old are you?"<<endl;
    cin>>age;
    cout<< "what is your name? "<<endl;
    getline(cin>>std::ws, name);//to accept a string with whitespace
                       //just cin only reads the value till it encounter a space
/*
smitha@smitha-Inspiron-15-3520:~/test/test8$ ./inp 
what is your name? 
Smitha 26
Hi Smitha!!
how old are you?
I am 26 too
smitha@smitha-Inspiron-15-3520:~/test/test8$ 
*/
    //cin>>name;
    cout<<"Hi "<<name<<"!!"<<endl;
    cout<<"I am "<<age<<" too"<<endl;
    return 0;
}