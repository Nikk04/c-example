#include<iostream>
#include<fstream>

using namespace std;

void scriviNumeri(ofstream& file) {
    cout << "Inserisci numeri interi oppure 0 per terminare:" << endl;
    int num;
    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        file << num << endl;
    }
}

void scriviTesto(ofstream& file) {
    cout << "Inserisci stringhe di testo (inserisci 'fine' per terminare):" << endl;
    string txt;
    while (true) {
        cin >> txt;
        if (txt == "fine") {
            break;
        }
        file << txt << endl;
    }
}

void unisciFile(ifstream& inFile1, ifstream& inFile2, ofstream& outFile) {
    int numFromFile1;
    while (inFile1 >> numFromFile1) {
        outFile << numFromFile1 << endl;
    }

    string txtFromFile2;
    while (inFile2 >> txtFromFile2) {
        outFile << txtFromFile2 << endl;
    }
}

int main() {
    ofstream numFile("file1.txt");
    if (!numFile) {
        cerr << "Errore nell'apertura di file1.txt" << endl;
        return 1;
    }
    scriviNumeri(numFile);
    numFile.close();

    ofstream txtFile("file2.txt");
    if (!txtFile) {
        cerr << "Errore nell'apertura di file2.txt" << endl;
        return 1;
    }
    scriviTesto(txtFile);
    txtFile.close();

    ifstream inFile1("file1.txt");
    ifstream inFile2("file2.txt");
    ofstream unionFile("unione.txt");

    if (!inFile1 || !inFile2 || !unionFile) {
        cerr << "Errore nell'apertura dei file di input/output" << endl;
        return 1;
    }

    unisciFile(inFile1, inFile2, unionFile);

    cout << "Contenuti di file1.txt e file2.txt sono stati uniti in unione.txt" << endl;

    inFile1.close();
    inFile2.close();
    unionFile.close();

    return 0;
}
