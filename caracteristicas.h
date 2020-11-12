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
		itemizacion(): botas(""), defensivos(""), ofensivos(""){};
		itemizacion(string bot, string def, string ofe): botas(bot), defensivos(def), ofensivos(ofe){};
		string get_botas();
		string get_defensivos();
		string get_ofensivos();
		
		void set_botas(string);
		void set_defensivos(string);
		void set_ofensivos(string);
	
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

void itemizacion::set_botas(string nombre){
	botas=nombre;
}

void itemizacion::set_defensivos(string nombre1){
	defensivos=nombre1;
}

void itemizacion::set_ofensivos(string nombre2){
	ofensivos=nombre2;
}


class counterPicks{
	private:
		string enemigosF;
		string enemigosD;
		
	public:
		counterPicks(): enemigosF(""), enemigosD(""){};
		counterPicks(string fuertes, string debiles): enemigosF(fuertes), enemigosD(debiles){};
		string get_enemigosF();
		string get_enemigosD();
		
		void set_enemigosF(string);
		void set_enemigosD(string);
	
};


string counterPicks::get_enemigosF(){
	return enemigosF;
}

string counterPicks::get_enemigosD(){
	return enemigosD;
}


void counterPicks::set_enemigosF(string nombre3){
	enemigosF=nombre3;
}

void counterPicks::set_enemigosD(string nombre4){
	enemigosD=nombre4;
}


int main(){
    cout<<"Ingresa el nombre del campeón:"<<endl;
    cout<<"Malphite"<<endl;
	
	itemizacion a1("Botas de Mercurio", "Corazón de Hielo", "Hidra Titánica");
	cout<<"Las botas más utilizadas con Malphite son: "<<a1.get_botas()<<endl;
	cout<<"El objeto defensivo más usado con Malphite es: "<<a1.get_defensivos()<<endl;
	cout<<"El objeto ofensivo más usado con Malphite es: "<<a1.get_ofensivos()<<endl;
	
	counterPicks a2("Garen e Illaoi", "Shen y Mordekaiser");
	cout<<"Malphite es débil al enfrentarse contra: "<<a2.get_enemigosF()<<endl;
	cout<<"Malphite es fuerte al enfrentarse contra: "<<a2.get_enemigosD()<<endl;
}
