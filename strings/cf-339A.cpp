#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string numbers;
    cin>> numbers;

    string result = "";

    for (size_t i=0; i<numbers.length(); i++){
        if (numbers[i]=='+'){
            continue;
        }else{
            result += numbers[i];
        }
    }

    sort(result.begin(), result.end());

    for(size_t i=0; i<result.length(); i++){
        cout << result[i];

        if (i < result.length() -1){
            cout << '+';
        }
    }
    cout << endl;
    return 0;
}