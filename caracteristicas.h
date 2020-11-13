// Proyecto avance 1
//Cristian Rogelio Espinosa Díaz 
//A01702752

#include <iostream>
using namespace std;

//se define la clase para que el programa organice y pueda desplegar en la pantalla la información de los "items" de los campeones

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

// se crea un constructor para que los datos que se asignen a las partes correspondientes que se asignaran a cada campeón
itemizacion:: itemizacion(string bot, string def, string ofe): botas(bot), defensivos(def), ofensivos(ofe){};

// se crea la instrucción para que el programa imprima el mensaje con los datos correspondientes
void itemizacion::set_botas(){
  cout<<"Las botas más utilizadas con Malphite son: "<<botas<<endl;
}
// se crea la instrucción para que el programa imprima el mensaje con los datos correspondientes
void itemizacion::set_defensivos(){
  cout<<"El objeto defensivo más usado con Malphite es: "<<defensivos<<endl;
}
// se crea la instrucción para que el programa imprima el mensaje con los datos correspondientes
void itemizacion::set_ofensivos(){
  cout<<"El objeto ofensivo más usado con Malphite es: "<<ofensivos<<endl;
}

//se define la clase para que el programa organice y pueda desplegar en la pantalla la información de los "items" de los campeones

class counterPicks{
	private:
		string enemigosF;
		string enemigosD;
		
	public:
		counterPicks(string, string);
		
		void set_enemigosF();
		void set_enemigosD();
	
};
// se crea un constructor para que los datos que se asignen a las partes correspondientes que se asignaran a cada campeon
counterPicks:: counterPicks(string fuertes, string debiles): enemigosF(fuertes), enemigosD(debiles){};

// se crea la instrucción para que el programa imprima el mensaje con los datos correspondientes
void counterPicks::set_enemigosF(){
	cout<<"Malphite es débil al enfrentarse contra: "<<enemigosF<<endl;	
}
// se crea la instrucción para que el programa imprima el mensaje con los datos correspondientes
void counterPicks::set_enemigosD(){
  cout<<"Malphite es fuerte al enfrentarse contra: "<<enemigosD<<endl;
}

//se define la clase para que el programa organice y pueda desplegar en la pantalla la información de los "items" de los campeones
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
// se crea un constructor para que los datos que se asignen a las partes correspondientes que se asignaran a cada campeon
runas:: runas(string rp, string rs, string rt): runas_principales(rp), runas_secundarias(rs), runas_terciarias(rt){};

// se crea la instrucción para que el programa imprima el mensaje con los datos correspondientes
void runas::set_runasp(){
  cout<<"Las runas principales son:"<<endl;
  cout<<runas_principales<<endl;
}
// se crea la instrucción para que el programa imprima el mensaje con los datos correspondientes
void runas::set_runass(){
  cout<<"Las runas secundarias son: "<<endl;
  cout<<runas_secundarias<<endl;
}
// se crea la instrucción para que el programa imprima el mensaje con los datos correspondientes
void runas::set_runast(){
  cout<<"El objeto ofensivo más usado con Malphite es: "<<endl;
  cout<<runas_terciarias<<endl;
}
