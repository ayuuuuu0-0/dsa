#include <cctype>
#include <iostream>
using namespace std;

int main(){
    string letter;
    cin >> letter;

    string result = "";
    
    for (size_t i=0; i<letter.length(); i++){
        char consonants = letter[i];

        char lowerConsonants = tolower(consonants);
        if (lowerConsonants == 'a' || lowerConsonants == 'e' || lowerConsonants == 'o'|| lowerConsonants == 'u' || lowerConsonants == 'y'|| lowerConsonants == 'i'){
            continue;
        }else{
            result = result + ".";
            result = result + lowerConsonants;
        }
    }
    cout << result << endl;

    return 0;
}