#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool Avokal(char c){
    char vokal[10] = {'a', 'i', 'u', 'e', 'o', 'A', 'I', 'U', 'E', 'O'};
    for (int i = 0; i < 10; i++){
        if (c == vokal[i]){
            return true;
        }
    }
    return false;
        
}

string password(string input, int len) {
    string pass;
    bool noAscii = true;
    int temp = len;
    for (int i = 0; i <= len; i++){
        if (!Avokal(input[temp - 1])){
            pass += input[temp - 1];
        }
        temp--;
    }
    
    pass.insert(pass.length()/2, to_string(int(input[0])));
    return pass;
}

string decrypt(string input, int len){
    string plain;
    int temp = len;
    for (int i = 0; i <= len; i++){
        if (isalpha(input[temp])){
            plain += input[temp];
        }
        temp--;
    }
    return plain;
}

int main(){
    int choice, len;
    string input;
    cout << "Apa yang akan kalian lakukan?\n1. Membuat password.\n2. Mendekripsi password." << endl;
    cin >> choice;
    if (choice == 1){
        cout << "Masukkan kata: " << endl;
        cin >> input;
        len = input.length();
        cout << password(input, len);
    } else if (choice == 2){
        cout << "Masukkan kata: " << endl;
        cin >> input;
        len = input.length();
        cout << decrypt(input, len);
    } else {
        return main();
    }
    return 0;
}