#include <iostream>
#include<string>
using namespace std;

int main(){
    string input;
    cin >> input;

    string target = "hello";
    int target_index = 0;

    for (size_t i=0; i<input.length(); i++){
        if(input[i] == target[target_index]){
            target_index++;
        }
    if (target_index == 5){
        break;
    }
}
if (target_index == 5){
        cout << "YES" << endl;
    }else{
        cout << "NO"<< endl;
    }
    return 0;
}