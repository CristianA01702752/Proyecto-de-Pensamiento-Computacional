// Proyecto avance 1
//Cristian Rogelio Espinosa Díaz 
//A01702752

#ifndef CARACTERISTICAS_H_
#define CARACTERISTICAS_H_
#include <sstream>
#include <iostream>
using namespace std;

class itemizacion{
	private:
	 string botas;
	 string defensivos;
	 string ofensivos;
		
	public:
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


string itemizacion::get_botas(){
  return botas;
}

string itemizacion::get_defensivos(){
  return defensivos;
}

string itemizacion::get_ofensivos(){
  return ofensivos;
}
void itemizacion::items_botas(string bot){
  botas=bot;
}

void itemizacion::items_defensivos(string def){
  defensivos=def;
}

void itemizacion::items_ofensivos(string ofe){
  ofensivos=ofe;
}

string itemizacion:: to_string()const{
    stringstream aux;
    aux<<" "<<botas<<", "<<defensivos<<", "<<ofensivos;
    return aux.str();
}

class counterPicks{
	private:
	 string enemigosF;
	 string enemigosD;
		
	public:
    	 counterPicks(){};
	 counterPicks(string fuertes, string debiles): enemigosF(fuertes), enemigosD(debiles){};
	  
	 void s_enemigosF(string);
	 void s_enemigosD(string);

    	 string get_enemigosF();
    	 string get_enemigosD();
         string to_string1()const;
};

string counterPicks::get_enemigosF(){
  return enemigosF;
}

string counterPicks::get_enemigosD(){
  return enemigosD;
}

void counterPicks::s_enemigosF(string fuertes){
	enemigosF=fuertes;	
}

void counterPicks::s_enemigosD(string debiles){
  enemigosD=debiles;
}

string counterPicks:: to_string1()const{
    stringstream aux;
    aux<<" "<<enemigosF<<" y tu personaje es fuerte contra: "<< enemigosD <<endl;
    return aux.str();
}

class runas_p{
	protected:
	 string runa_1;
	 string runa_2;
	 string runa_3;
	 string runa_4;

	public:
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

runas_p::runas_p(){
  runa_1="";
  runa_2="";
  runa_3="";
  runa_4="";  
}

runas_p::runas_p(string r1, string r2, string r3, string r4){
  runa_1=r1;
  runa_2=r2;
  runa_3=r3;
  runa_4=r4;
}

string runas_p:: get_runa1(){
  return runa_1;
}

string runas_p:: get_runa2(){
  return runa_2;
}

string runas_p:: get_runa3(){
  return runa_3;
}

string runas_p:: get_runa4(){
  return runa_4;
}

void runas_p:: s_runa1(string r1){
  runa_1=r1;
}

void runas_p:: s_runa2(string r2){
  runa_2=r2;
}

void runas_p:: s_runa3(string r3){
  runa_3=r3;
}

void runas_p:: s_runa4(string r4){
  runa_4=r4;
}

class runas_s: public runas_p {
  
  private:
    string runas_1;
    string runas_2;
  
  public:
    runas_s();
    runas_s(string, string, string, string, string, string);
    void s_runas1(string);
    void s_runas2(string);
    string get_runas1();
    string get_runas2();
    string to_string2()const;
    
};

runas_s::runas_s(){
  runa_1="";
  runa_2="";
  runa_3="";
  runa_4="";
}
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

string runas_s:: get_runas1(){
  return runas_1;
}

string runas_s:: get_runas2(){
  return runas_2;
}

string runas_s:: to_string2()const{
    stringstream aux;
    aux<<runa_1<<", "<<runa_2<<", "<<runa_3<<" y "<<runa_4<<"y las runas secundarias son: "<<runas_1<<" y "<<runas_2 <<endl;
    return aux.str();
}
#endif 
