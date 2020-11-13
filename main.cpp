// Proyecto avance 1
//Cristian Rogelio Espinosa Díaz 
//A01702752

#include <iostream>
using namespace std;
#include "caracteristicas.h";

#include <iostream>
using namespace std;
#include "caracteristicas.h"

void menu (){
  cout<<"1. Malphite"<<endl;
  cout<<"2. Salir"<<endl;
  
}

int main(){
    cout<<"Ingresa el nombre del campeón:"<<endl;
    cout<<"Malphite"<<endl;
	
    itemizacion malphite= itemizacion("Botas de Mercurio", "Corazón de Hielo", "Hidra Titánica");

    counterPicks malphite1= counterPicks("Garen e Illaoi", "Shen y Mordekaiser");

    runas malphite2= runas("Cometa arcano, Banda de Maná, Trascendencia y Pirolasér","Entrega de galletas y Tónico de distorsión temporal", "2 puntos ofensivos y 1 punto en armadura");
    

    
    bool ciclo = true;
    while (ciclo){
      menu();
        int eleccion;
        std::cout << "Elige a tu campeon: ";
        std::cin >> eleccion;
    
        if (eleccion==1){
          malphite.set_botas();
          malphite.set_defensivos();
          malphite.set_ofensivos();
          malphite1.set_enemigosF();
          malphite1.set_enemigosD();
          malphite2.set_runasp();
          malphite2.set_runass();
          malphite2.set_runast();
        }
        else if (eleccion==2){
          cout<<"Adiós, invocador"<<endl;
          exit(-1);
      }
    }
  }

