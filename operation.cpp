#include<iostream>
#include<vector>
#include <string>
namespace std{

    vector<string> Letters = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    vector<string> num = {"0","1","2","3","4","5","6","7","8","9"};
    vector<string> op = {"+","*","-","/"};




bool checkContent(vector<string> &tab,string &c){
    for(const auto &x : tab){
        if(x == c){
            return true;
        }
    }
    return false;

}

void main(){
    checkContent(Letters,(string)"b");
}
}
