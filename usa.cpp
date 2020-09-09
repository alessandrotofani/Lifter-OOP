// main che usa l'ascensore
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#include "ascensore.h"
using namespace std;

int main(){

  srand(time(NULL));
  int nPersone, nmax = 10;
  int p=rand()%23+(-2);
  int newPiano,tuoPiano; //destinazione
  bool occupato=false;
  int occ=rand()%2;
  ascensore ascensore (p);

  if(occ==1){occupato=false;}
  else occupato=true;
  if(occupato){
    cout<<"L'ascensore è occupato. Attendere che finisca "<<endl;
    occupato=false;
  }
  
  ascensore.setPiano(p);
  cout<<"L'ascensore è al piano "<<ascensore.getPiano()<<endl;
  cout<<"Selezionare il tuo piano "<<endl;
  cin>>tuoPiano;
  tuoPiano = ascensore.checktuo(tuoPiano);
  ascensore.setPianotuo(tuoPiano);

  
  cout<<"Quante persone salgono?"<<endl;
  cin>> nPersone;
  nPersone = ascensore.checkpersone(nPersone);
  
  ascensore.setPianonew(newPiano);

  if(occupato==false){
    
    if(p==tuoPiano){
      cout<<"Le porte si stanno aprendo"<<endl;
      cout<<"Selezionare il piano a cui si vuole andare "<<endl;
      cin>>newPiano;
      newPiano = ascensore.checknew(newPiano);
    }
    else{
     ascensore.chiama(tuoPiano,newPiano);
    }
    
    if(p>tuoPiano){
      ascensore.setPianotuo(tuoPiano);
      ascensore.scendi();
      ascensore.apri();

      cout<<"Selezionare il piano a cui si vuole andare "<<endl;
      cin>>newPiano;
      newPiano = ascensore.checknew(newPiano);
     
    };
    
    if(p<tuoPiano){
      ascensore.setPianotuo(tuoPiano);
      ascensore.sali();
      ascensore.apri();

      cout<<"Selezionare il piano a cui si vuole andare "<<endl;
      cin>>newPiano;
      newPiano = ascensore.checknew(newPiano);
      
      };

  }
  
  if(newPiano<tuoPiano){
    ascensore.setPianonew(newPiano);
    ascensore.scendi();    
  }

  if(newPiano>tuoPiano){
    ascensore.setPianonew(newPiano);
    ascensore.sali();  
  }
  cout<<"L'ascensore è al piano "<<ascensore.getPiano()<<endl;

  return 0;
}
