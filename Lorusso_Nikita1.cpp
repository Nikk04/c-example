#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream file("pesate.txt");
    for (int i = 0; i < 20; i++) {
        int pesoGrammi = rand() % 99000000;
        file << pesoGrammi << endl;
    }
    file.close();

    ifstream inputFile("pesate.txt");
    int peso, media = 0, max = 0, min = 99000000;
    int count = 0;

    while (inputFile >> peso) {
        media += peso;
        if (peso > max) max = peso;
        if (peso < min) min = peso;
        count++;
    }

    if (count > 0) {
        media /= count;
        cout << "Pesate scritte nel file:" << endl;
        cout << "Media delle pesate: " << media << " grammi" << endl;
        cout << "Pesata più alta: " << max / 1000.0 << " Kg" << endl;
        cout << "Pesata più bassa: " << min / 1000.0 << " Kg" << endl;
    } else {
        cout << "Nessuna pesata trovata nel file" << endl;
    }

    return 0;
}
