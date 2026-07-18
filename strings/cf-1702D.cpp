#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin >> s;


        vector<int>pos[26];

        for(int i=0; i<s.size(); i++){
            int ch = s[i] - 'a';
            pos[ch].push_back(i);
        }

        int sum = 0;

        for(char ch: s){
            sum = sum + ch - 'a' + 1;
        }

        for(int c=25; c>=0; c--){
            int idx = pos[c].back();
            pos[c].pop_back();
        }
    }
}