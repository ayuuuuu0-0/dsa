#include <cctype>
#include <iostream>
using namespace std;

int main(){
    string string1, string2;
    cin>> string1 >> string2;

    for(size_t i=0; i<string1.length(); i++){
        string1[i] = tolower(string1[i]);
    }

    for (size_t i=0; i<string2.length(); i++){
         string2[i] = tolower(string2[i]);
    }

    if (string1 > string2){
        cout << 1 <<endl;
    } else if (string1 < string2){
        cout << -1 << endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}