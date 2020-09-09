//implementazione classe ascensore
#include <iostream>
#include "ascensore.h"
using namespace std;
int newPiano;
int tuoPiano;

ascensore::ascensore(int p){ //costruttore
  //nel main mettere qualcosa che assegni un valore a p
  Piano=p;
}

int ascensore::getPiano(){
  return Piano;
}

void ascensore::setPiano(int p){
  Piano=p;
}

void ascensore::setPianotuo(int p){
    Piano=p;
}

void ascensore::setPianonew(int p){
    Piano=p;
}

int ascensore::checktuo(int tuoPiano){
  if(tuoPiano<-2||tuoPiano>21){
    cout << "Impossibile, limiti dell'edificio a -2 e 21." << endl;
    cout << "Selezionare il tuo piano " << endl;
    cin >> tuoPiano;
    checktuo(tuoPiano);
  }else
    return tuoPiano;
}

int ascensore::checknew(int newPiano){
  if(newPiano<-2||newPiano>21){
    cout << "Piano non valido, limiti edificio a -2 e 21." << endl;
    cout << "Selezionare il piano a cui si vuole andare piano " << endl;
    cin >> newPiano;
    checknew(newPiano);
  }else
    return newPiano;
}

int ascensore::checkpersone(int nPersone){
  int nmax = 10;
  if(nPersone > nmax){
    cout<< "Limite max di persone superato,qualcuno non deve salire "<<endl;
    cout<< "Adesso quante persone salgono sull'ascensore? "<<endl;
    cin>> nPersone;
    checkpersone(nPersone);
  }
  else
    return nPersone;
}

  
bool ascensore::chiama(int tuoPiano, int newPiano){
  cout<<"L'ascensore sta arrivando al piano "<<tuoPiano<<endl;
}

void ascensore::sali(){
  cout<<"L'ascensore sta salendo al piano "<<Piano<<endl;
};

void ascensore::scendi(){
  cout<<"L'ascensore sta scendendo al piano "<<Piano<<endl;
};

void ascensore::apri(){
  cout<<"Le porte si stanno aprendo"<<endl;
}

