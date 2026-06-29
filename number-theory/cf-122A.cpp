#include<iostream>
using namespace std;

bool isLucky(int num){
    while(num > 0){
    int digit = num % 10;
    if (digit != 4 && digit != 7){
        return false;
    }
    num /= 10;
}
return true;
}
int main(){
    int n;
    cin >> n;

    bool isAlmostLucky = false;

    for (int i=1; i<=n; i++){
        if(n%i==0){
           if (isLucky(i)) {
            isAlmostLucky = true;
            break;
           }
        }
    }
    if (isAlmostLucky == true){
        cout << "YES" << endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}