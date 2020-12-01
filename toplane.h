/* Proyecto avance 1
 *Cristian Rogelio Espinosa Díaz 
 *A01702752
*/

//Se incluye el archivo donde se encuentran las clases que definimos en "caracteristicas.h"
#ifndef TOPLANE_H_
#define TOPLANE_H_
#include "caracteristicas.h"

//Se define la clase toplane, la cual sera compuesta por las clases previas
class toplane{
  protected:
    //Se define las variables que estaran compuestas por las variables que definimos previamente
    itemizacion items[2];
    counterPicks picks[2];
    runas_s runa[2];
  public:
   /* Se declara un constructor defautl y los métodos que se utilizaran
    * en la clase "toplane"
    */
   toplane(){};
   void agregaitems(int,string,string,string);
   void agregapicks(int, string, string);
   void agregarunas(int,string, string, string, string, string, string);
   void muestra_items();
   void muestra_picks();
   void muestra_runas();
};

/*
 * setter agregaitems
 *
 * @param int lista, string b, string d, string o
 * @return los objetos que conformaran la variable items[lista]
 */
void toplane::agregaitems(int lista,string b, string d, string o){
 items[lista]=itemizacion(b,d,o);
}

/*
 * setter agregapicks
 *
 * @param int lista1, string f, string d
 * @return los objetos que conformaran la variable picks[lista1]
 */
void toplane::agregapicks(int lista1, string f, string d){
 picks[lista1]=counterPicks(f,d);
}

/*
 * setter agregarunas
 *
 * @param int lista2, string ru1, string ru2, string ru3, string ru4, string ru5, string ru6
 * @return los objetos que conformaran la variable items
 */
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
