#include <iostream>
using namespace std;

int main(){
    int val;
    int total_moves=0;

    for(int row=0; row<5; row++){
        for(int col=0; col<5; col++){
            cin >> val;


            if(val == 1){
                total_moves = abs(row -2) + abs(col-2);
                cout << total_moves << endl;
            return 0;
            }
        }
    }
    return 0;
}