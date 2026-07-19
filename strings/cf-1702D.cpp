#include<iostream>
#include<vector>
using namespace std;

int main(){
    int testCases;
    cin>>testCases;

    while(testCases--){
        string word;
        cin >> word;

        int maxSize;
        cin >> maxSize;

        int totalSize = 0;

        vector<int>position[26];

        for(int i=0; i<word.size(); i++){
            int character = word[i] - 'a';
            position[character].push_back(i);

            totalCost += character + 1;
        }

        int sum = 0;

        for(char ch: s){
            sum = sum + ch - 'a' + 1;
        }

        for(int c=25; c>=0; c+--){
            int idx = pos[c].back();
            pos[c].pop_back();
        }
    }
}