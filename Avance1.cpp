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


int main(){
    cout<<"Ingresa el nombre del campeón:"<<endl;
    cout<<"Malphite"<<endl;
	
	itemizacion a1("Botas de Mercurio", "Corazón de Hielo", "Hidra Titánica");
	cout<<"Las botas más utilizadas con Malphite son: "<<a1.get_botas()<<endl;
	cout<<"El objeto defensivo más usado con Malphite es: "<<a1.get_defensivos()<<endl;
	cout<<"El objeto ofensivo más usado con Malphite es: "<<a1.get_ofensivos()<<endl;
	
}
