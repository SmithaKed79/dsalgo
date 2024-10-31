#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;4
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;// more popular easier for using templates

int main(){
    using std::cout;
    using std::endl;
    //pairlist_t pairlist;
    text_t name = "smitha";
    number_t num = 26;
    cout<<name<<" age "<< num <<endl;
    return 0;
}