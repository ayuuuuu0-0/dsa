#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int total_turns = min(n,m);

    if (total_turns % 2 == 0){
        cout << "Malvika" << endl;
    } else {
        cout << "Akshat" << endl;
    }
    return 0;
}