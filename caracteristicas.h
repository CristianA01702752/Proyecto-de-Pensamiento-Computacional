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
		itemizacion(string, string, string);
		
		void set_botas();
		void set_defensivos();
		void set_ofensivos();
	
};

itemizacion:: itemizacion(string bot, string def, string ofe){
    botas=bot;
    defensivos=def;
    ofensivos=ofe;
}


void itemizacion::set_botas(){
  cout<<"Las botas más utilizadas con Malphite son: "<<botas<<endl;
}

void itemizacion::set_defensivos(){
  cout<<"El objeto defensivo más usado con Malphite es: "<<defensivos<<endl;
}

void itemizacion::set_ofensivos(){
  cout<<"El objeto ofensivo más usado con Malphite es: "<<ofensivos<<endl;
}


class counterPicks{
	private:
		string enemigosF;
		string enemigosD;
		
	public:
		counterPicks(string, string);
		
		void set_enemigosF();
		void set_enemigosD();
	
};

counterPicks:: counterPicks(string fuertes, string debiles){
    enemigosF=fuertes;
    enemigosD=debiles;
}

void counterPicks::set_enemigosF(){
	cout<<"Malphite es débil al enfrentarse contra: "<<enemigosF<<endl;	
}

void counterPicks::set_enemigosD(){
  cout<<"Malphite es fuerte al enfrentarse contra: "<<enemigosD<<endl;
}

class runas{
	private:
		string runas_principales;
		string runas_secundarias;
		string runas_terciarias;
		
	public:
		runas(string, string, string);
		
		void set_runasp();
		void set_runass();
		void set_runast();
	
};

runas:: runas(string rp, string rs, string rt){
    runas_principales=rp;
    runas_secundarias=rs;
    runas_terciarias=rt;
}


void runas::set_runasp(){
  cout<<"Las runas principales son:"<<endl;
  cout<<runas_principales<<endl;
}

void runas::set_runass(){
  cout<<"Las runas secundarias son: "<<endl;
  cout<<runas_secundarias<<endl;
}

void runas::set_runast(){
  cout<<"El objeto ofensivo más usado con Malphite es: "<<endl;
  cout<<runas_terciarias<<endl;
}
