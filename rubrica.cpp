#include<iostream>
#include<fstream>

using namespace std;

int main() {
    string cognome, nome, telefono;
    int i = 1;
    
    ofstream varfile("rubrica.txt");
    ofstream f("rubrica.csv");
    ofstream html("rubrica.html");
    f << "Cognome,Nome,Telefono" << endl; 
    f.close();
    html << "Cognome,Nome,Telefono" << endl; 
    html.close();
    while (i == 1) {
        cout << "Inserisci nome: " << endl;
        cin >> nome;
        cout << "Inserisci il cognome: " << endl;
        cin >> cognome;
        cout << "Inserisci il numero: " << endl;
        cin >> telefono;
        cout << "Se vuoi continuare premi 1, altrimenti 0: ";
        cin >> i;

        varfile << cognome << " " << nome << " " << telefono << endl;
        f.open("rubrica.csv", ios::app); 
        f << cognome << "," << nome << "," << telefono << endl; 
        f.close();
    
        html << cognome << nome << telefono << endl; 
        html.close();
    
    }

    varfile.close();

    ifstream openfile("rubrica.txt");
    ifstream Openfile("rubrica.csv");
    ifstream openhtml("rubrica.html");

    while (openfile >> cognome >> nome >> telefono) {
        cout << "Nome: " << nome << " Cognome: " << cognome << " Telefono: " << telefono << endl;
    }
    while (openhtml >> cognome >> nome >> telefono) {
        cout << "Nome: " << nome << " Cognome: " << cognome << " Telefono: " << telefono << endl;
    }


    openfile.close();
    Openfile.close();
    openhtml.close();

    return 0;
}
