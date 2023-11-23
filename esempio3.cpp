#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string nome, cognome;
    int i = 1;

    ofstream varfile("lezione.txt");

    while (i == 1) {
        cout << "Inserisci nome: " << endl;
        cin >> nome;
        cout << "Inserisci il cognome: " << endl;
        cin >> cognome;
        cout << "Se vuoi continuare premi 1, altrimenti 0: ";
        cin >> i;

        varfile << cognome << " " << nome << endl;
    }

    varfile.close();

    ifstream openfile("lezione.txt");
    while (openfile >> cognome >> nome) {
        cout << "Nome: " << nome << " Cognome: " << cognome << endl;
    }

    openfile.close();

    string cognomeCercato;
    cout << "Inserisci il cognome da cercare: ";
    cin >> cognomeCercato;

    ifstream ricercaFile("lezione.txt");
    bool trovato = false;

    while (ricercaFile >> cognome >> nome) {
        if (cognome == cognomeCercato) {
            cout << "Nome associato a " << cognomeCercato << ": " << nome << endl;
            trovato = true;
        }
    }

    if (!trovato) {
        cout << "Cognome non trovato nel file." << endl;
    }

    ricercaFile.close();

    return 0;
}
