// Proyecto avance 1
//Cristian Rogelio Espinosa Díaz 
//A01702752

#include <iostream>
using namespace std;

class itemizacion{
	private:
		string botas;
		string defensivos;
		string ofensivos;
		
	public:
		itemizacion(string bot, string def, string ofe): botas(bot), defensivos(def), ofensivos(ofe){};
		
		void set_botas(string);
		void set_defensivos(string);
		void set_ofensivos(string);

    string get_botas();
    string get_defensivos();
    string get_ofensivos();
	
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
void itemizacion::set_botas(string bot){
  botas=bot;
}

void itemizacion::set_defensivos(string def){
  defensivos=def;
}

void itemizacion::set_ofensivos(string ofe){
  ofensivos=ofe;
}


class counterPicks{
	private:
		string enemigosF;
		string enemigosD;
		
	public:
		counterPicks(string fuertes, string debiles): enemigosF(fuertes), enemigosD(debiles){};
		
		void set_enemigosF(string);
		void set_enemigosD(string);

    string get_enemigosF();
    string get_enemigosD();
	
};

string counterPicks::get_enemigosF(){
  return enemigosF;
}

string counterPicks::get_enemigosD(){
  return enemigosD;
}

void counterPicks::set_enemigosF(string fuertes){
	enemigosF=fuertes;	
}

void counterPicks::set_enemigosD(string debiles){
  enemigosD=debiles;
}

class runas{
	private:
		string runas_principales;
		string runas_secundarias;
		string runas_terciarias;
		
	public:
		runas(string rp, string rs, string rt): runas_principales(rp), runas_secundarias(rs), runas_terciarias(rt){};
		
		void set_runasp(string);
		void set_runass(string);
		void set_runast(string);

    string get_runasp();
    string get_runass();
    string get_runast();
	
};

string runas:: get_runasp(){
  return runas_principales;
}

string runas:: get_runass(){
  return runas_secundarias;
}

string runas:: get_runast(){
  return runas_terciarias;
}

void runas::set_runasp(string rp){
  runas_principales=rp;
}

void runas::set_runass(string rs){
  runas_secundarias=rs;
}

void runas::set_runast(string rt){
  runas_terciarias=rt;
}
