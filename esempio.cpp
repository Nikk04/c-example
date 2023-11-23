#include <iostream>
#include <string>
#include <bitset>
using namespace std;
int main() {
    
    string n;
    cout << "Inserisci una stringa di 8 caratteri alfanumerici: ";
    cin >> n;

   
    bool Palindromo = true;
    int length = n.length();
    for (int i = 0; i < length / 2; ++i) {
        if (n[i] != n[length - i - 1]) {
            Palindromo = false;
            break;
        }
    }

    if (Palindromo) {
        cout << "La stringa è un palindromo." << endl;
    } else {
        cout << "La stringa non è un palindromo." << endl;
    }

    
    const int Righe = 8;
    const int Colonne = 8;
    bitset<8> binario[Righe][Colonne];

    for (int i = 0; i < Righe; ++i) {
        for (int j = 0; j < Colonne; ++j) {
            if (i * Colonne + j < length) {
                binario[i][j] = bitset<8>(n[i * Colonne + j]);
            } else {
                
                binario[i][j] = bitset<8>(0);
            }
        }
    }

   
     cout << "Matrice binaria:" << endl;
    for (int i = 0; i < Righe; ++i) {
        for (int j = 0; j < Colonne; ++j) {
            cout << binario[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



































































