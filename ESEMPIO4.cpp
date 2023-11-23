#include<iostream>
#include<fstream>
using namespace std;
int main(){
      int i = 0, input, somma=0; //per inserimento dei nuemri interi
      ofstream varfile("lezione.txt"); //salva i numeri sul  hard disk in un file
      for (i = 0; i < 10; i++) {
          cout<<"inserisc2i 10 interi"<<endl; //inserimento numeri interi
          cin>>input;
          varfile<<input<<endl;
    }
     varfile.close(); //chiusura variabile varfile
    ifstream openfile("lezione.txt");
       while(!openfile.eof()){
       openfile>>input;
       if(i<10){
        
        
       cout<<input<<endl;
       i++;
       
       }
       somma+=input; //somma dei 10 numeri
    }
    openfile.close();//chisura variabili
   
   cout<<"la somma è:"<<somma<<endl;//stampo la somma dei 10 numeri

    return 0;
}
