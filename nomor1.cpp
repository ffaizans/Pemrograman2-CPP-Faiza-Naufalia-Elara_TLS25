#include <iostream>
using namespace std;

int main(){
    // variabel
    int n, input, lastDigit, reversed = 0, sum = 0;
    bool genap = true, ganjil = false;
    
    // panjang array
    cout << "Masukkan panjang array: ";
    cin >> n;

    // elemen elemen pada array
    int i = 1;
    while(i <= n){
        cout << "Masukkan " << i << " / " << n << " angka: ";
        cin >> input;
        if (genap){
            // cek apakah negatif
            if (input < 0){
                ganjil = true;
                input *= -1;
            }

            while(input > 0){
                lastDigit = input % 10;
                if (lastDigit != 0){
                    reversed += lastDigit;
                    input = input/10;
                } else {
                    input = input/10;
                }
                reversed *= 10; 
            }
            
            // membalikkan jika negatif
            if (ganjil){
                reversed *= -1;
                isNegative = false;
            }
            
            reversed /= 10;
            sum += reversed;
            reversed = 0;
            genap = false;
        } else {
            sum += input;
            genap = true;
        }
        i++;
    }
    cout << "Sum: " << sum << endl;
    
    return 0;
}