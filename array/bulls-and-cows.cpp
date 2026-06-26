class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0;
        int cows = 0;

        vector<int>secret_array(10,0);
        vector<int>guess_array(10,0);

        for(int i=0; i<secret.length(); i++){
            if (secret[i] == guess[i]){
                bulls++;
            }else {
                secret_array[secret[i] - '0']++;
                guess_array[guess[i] - '0']++;
            }
        }

        for (int i=0; i<10; i++){
            cows += min(secret_array[i], guess_array[i]);
        }

        return to_string(bulls) + 'A' + to_string(cows) + 'B';
    }
};