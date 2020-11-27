#ifndef TOPLANE_H_
#define TOPLANE_H_
#include "caracteristicas.h"

class toplane{
  protected:
    itemizacion items[2];
    counterPicks picks[2];
    runas_s runa[2];
  public:
   toplane(){};
   void agregaitems(int,string,string,string);
   void agregapicks(int, string, string);
   void agregarunas(int,string, string, string, string, string, string);
   void muestra_items();
   void muestra_picks();
   void muestra_runas();

};

void toplane::agregaitems(int lista,string b, string d, string o){
 items[lista]=itemizacion(b,d,o);
}

void toplane::agregapicks(int lista1, string f, string d){
 picks[lista1]=counterPicks(f,d);
}

void toplane::agregarunas(int lista2, string ru1, string ru2, string ru3, string ru4, string ru5, string ru6){
  runa[lista2]=runas_s(ru1, ru2, ru3, ru4, ru5, ru6);
}

void toplane::muestra_items(){
  for(int i = 1 ; i <2; i++){
      cout<<"Los items más usados son:"<<items[i].to_string()<<endl;
    }
    
}

void toplane::muestra_picks(){
  for(int i = 1 ; i <2; i++){
      cout<<"Tu personaje es débil contra:"<<picks[i].to_string1()<<endl;
    }
}

void toplane::muestra_runas(){
  for(int i = 1 ; i <2; i++){
      cout<<"Las runas principales son: "<<runa[i].to_string2()<<endl;
    }
}
#endif