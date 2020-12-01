/* Proyecto avance 1
 * Cristian Rogelio Espinosa Díaz 
 * A01702752
 */

#ifndef CARACTERISTICAS_H_
#define CARACTERISTICAS_H_
#include <sstream>
#include <iostream>
using namespace std;
/*
 * Este archivo contiene las 3 clases que se van a usar para que el programa funcione
 * las cuales son itemizacion, counterPicks y runas_p.
 * runas_p tendrá una clase hija la cual se llama runas_s, 
 * cuyo propósito es heredar los objetos de la clase padre para poder 
 * tener los 6 valores en uno solo
 */

// Declaración de la clase itemizacion
class itemizacion{
	private:
	 // Declaro las variables de la clase
	 string botas;
	 string defensivos;
	 string ofensivos;
		
	public:
	  /* Declaro los métodos que se utilizarán en la clase
	   * Declaro tanto un constructor default como un constructor con las variables 
	   */ 
    	 itemizacion(){};
	 itemizacion(string bot, string def, string ofe): botas(bot), defensivos(def), ofensivos(ofe){};
	
	 void items_botas(string);
	 void items_defensivos(string);
	 void items_ofensivos(string);

    	 string get_botas();
    	 string get_defensivos();
    	 string get_ofensivos();
         string to_string()const;
};

/*
 * getter get_botas
 *
 * @param
 * @return string: botas del personaje
 */
string itemizacion::get_botas(){
  return botas;
}

/*
 * getter get_defensivos
 *
 * @param
 * @return string: objeto defensivo del personaje
 */
string itemizacion::get_defensivos(){
  return defensivos;
}

/*
 * getter get_ofensivos
 *
 * @param
 * @return string: objeto ofensivo del personaje
 */
string itemizacion::get_ofensivos(){
  return ofensivos;
}

/*
 * setter items_botas
 *
 * @param string bot
 * @return variable botas
 */
void itemizacion::items_botas(string bot){
  botas=bot;
}

/*
 * setter items_defensivos
 *
 * @param string def
 * @return variable defensivos
 */
void itemizacion::items_defensivos(string def){
  defensivos=def;
}

/*
 * setter items_ofensivos
 *
 * @param string ofe
 * @return variable ofensivos
 */
void itemizacion::items_ofensivos(string ofe){
  ofensivos=ofe;
}

/*
 * Almacenda los valores de las variables botas, defensivos y ofensivos en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos de las variables botas, defensivos y ofensivos
 */
string itemizacion:: to_string()const{
    stringstream aux;
    aux<<" "<<botas<<", "<<defensivos<<", "<<ofensivos;
    return aux.str();
}

// Declaración de la clase counterPicks
class counterPicks{
	private:
	 // Declaro las variables de la clase
	 string enemigosF;
	 string enemigosD;
		
	public:
	 /* Declaro los métodos que se utilizarán en la clase
	  * Declaro tanto un constructor default como un constructor con las variables 
	  */ 
    	 counterPicks(){};
	 counterPicks(string fuertes, string debiles): enemigosF(fuertes), enemigosD(debiles){};
	  
	 void s_enemigosF(string);
	 void s_enemigosD(string);

    	 string get_enemigosF();
    	 string get_enemigosD();
         string to_string1()const;
};

/*
 * getter get_enemigosF
 *
 * @param
 * @return string: enemigos a los que el personaje que el usuario eliga es débil en un enfrentamiento
 */
string counterPicks::get_enemigosF(){
  return enemigosF;
}

/*
 * getter get_enemigosD
 *
 * @param
 * @return string: enemigos a los que el personaje que el usuario es fuerte en un enfrentamiento
 */
string counterPicks::get_enemigosD(){
  return enemigosD;
}

/*
 * setter s_enemigosF
 *
 * @param string fuertes
 * @return variable enemigosF
 */
void counterPicks::s_enemigosF(string fuertes){
	enemigosF=fuertes;	
}

/*
 * setter s_enemigosD
 *
 * @param string debiles
 * @return variable enemigosD
 */
void counterPicks::s_enemigosD(string debiles){
  enemigosD=debiles;
}

/*
 * Almacenda los valores de las variables enemigosF y enemigosD en una cadena de
 * texto.
 *
 * @param
 * @return string con los datos de las variables enemigosF y enemigosD.
 */
string counterPicks:: to_string1()const{
    stringstream aux;
    aux<<" "<<enemigosF<<" y tu personaje es fuerte contra: "<< enemigosD <<endl;
    return aux.str();
}

// Declaración de la clase runas_p
class runas_p{
	protected:
	 // Declaro las variables de la clase
	 string runa_1;
	 string runa_2;
	 string runa_3;
	 string runa_4;

	public:
	 /* Declaro los métodos que se utilizarán en la clase
	   * Declaro tanto un constructor default como un constructor con las variables 
	   */ 
    	 runas_p();
	 runas_p(string runa_1, string runa_2, string runa_3,string runa_4);
		
	 void s_runa1(string);
	 void s_runa2(string);
	 void s_runa3(string);
    	 void s_runa4(string);

    	 string get_runa1();
    	 string get_runa2();
    	 string get_runa3();
    	 string get_runa4();
};

/*
 * Constructor por default
 *
 * @param
 * @return Objeto runas_p
 */
runas_p::runas_p(){
  runa_1="";
  runa_2="";
  runa_3="";
  runa_4="";  
}

/*
 * Constructor donde recibe los valores para llenar las variables de instancia
 *
 * @param string r1: la primer runa del personaje, string r2: la segunda runa del personaje, 
 * string r3: la tercera runa del personaje, string r4: la tercera runa del personaje
 * @return
 */
runas_p::runas_p(string r1, string r2, string r3, string r4){
  runa_1=r1;
  runa_2=r2;
  runa_3=r3;
  runa_4=r4;
}

/*
 * getter get_runa1
 *
 * @param
 * @return string: la primer runa del personaje
 */
string runas_p:: get_runa1(){
  return runa_1;
}

/*
 * getter get_runa2
 *
 * @param
 * @return string: la segunda runa del personaje
 */
string runas_p:: get_runa2(){
  return runa_2;
}

/*
 * getter get_runa3
 *
 * @param
 * @return string: la tercera runa del personaje
 */
string runas_p:: get_runa3(){
  return runa_3;
}

/*
 * getter get_runa4
 *
 * @param
 * @return string: la cuarta runa del personaje
 */
string runas_p:: get_runa4(){
  return runa_4;
}

/*
 * setter s_runa1
 *
 * @param string r1
 * @return variable runa_1
 */
void runas_p:: s_runa1(string r1){
  runa_1=r1;
}

/*
 * setter s_runa2
 *
 * @param string r2
 * @return variable runa_2
 */
void runas_p:: s_runa2(string r2){
  runa_2=r2;
}

/*
 * setter s_runa3
 *
 * @param string r3
 * @return variable runa_3
 */
void runas_p:: s_runa3(string r3){
  runa_3=r3;
}

/*
 * setter s_runa4
 *
 * @param string r4
 * @return variable runa_4
 */
void runas_p:: s_runa4(string r4){
  runa_4=r4;
}

//Declaro la clase runas_s que hereda de runas_p
class runas_s: public runas_p {
  
  private:
    // Declaro las variables de la clase
    string runas_1;
    string runas_2;
  
  public:
     // Declaro las variables de la clase
     /* Declaro los métodos que se utilizarán en la clase
      * Declaro tanto un constructor default como un constructor con las variables 
      */
    runas_s();
    runas_s(string, string, string, string, string, string);
    void s_runas1(string);
    void s_runas2(string);
    string get_runas1();
    string get_runas2();
    string to_string2()const;
    
};
/*
 * Constructor por default
 *
 * @param
 * @return Objeto runas_s que se heredaron de la clase padre (runas_p)
 */
runas_s::runas_s(){
  runa_1="";
  runa_2="";
  runa_3="";
  runa_4="";
}

/*
 * Constructor donde recibe los valores para llenar las variables de instancia
 *
 * @param string r1: la primer runa del personaje, string r2: la segunda runa del personaje, 
 * string r3: la tercera runa del personaje, string r4: la tercera runa del personaje, 
 * string runas_1: la primera runa secundaria, string runas_2: la segunda runa secundaria.
 * @return
 */
runas_s::runas_s(string r1, string r2, string r3,string r4, string r5, string r6){
  runa_1=r1;
  runa_2=r2;
  runa_3=r3;
  runa_4=r4;
  runas_1=r5;
  runas_2=r6;
};

void runas_s::s_runas1(string r5){
  runas_1=r5;
}

void runas_s::s_runas2(string r6){
  runas_2=r6;
}

/*
 * getter get_runas1
 *
 * @param
 * @return string: la primera runa secundaria del personaje
 */
string runas_s:: get_runas1(){
  return runas_1;
}

/*
 * getter get_runas2
 *
 * @param
 * @return string: la segunda runa secundaria del personaje
 */
string runas_s:: get_runas2(){
  return runas_2;
}
/*
 * Almacenda los valores de las variables que se heradaron de la clase padre y los que se crearon en la clase hija
 * en una cadena texto.
 *
 * @param
 * @return string con los datos de las variables runa_1, runa_2, runa_3, runa_4, runas_1 y runas_2.
 */
string runas_s:: to_string2()const{
    stringstream aux;
    aux<<runa_1<<", "<<runa_2<<", "<<runa_3<<" y "<<runa_4<<"y las runas secundarias son: "<<runas_1<<" y "<<runas_2 <<endl;
    return aux.str();
}
#endif 
