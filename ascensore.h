//file header
#ifndef ASCENSORE_H
#define ASCENSORE_H

class ascensore {

 public:
  ascensore(int);

  int getPiano();
  void setPiano(int);
  void setPianotuo(int);
  void setPianonew(int);
  int checktuo(int);
  int checknew(int);
  int checkpersone(int);
  
  bool chiama(int,int);
  void sali();
  void scendi();
  void apri();

 private:
  int Piano;


};
#endif
