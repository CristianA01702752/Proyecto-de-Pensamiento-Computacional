// Proyecto avance 1
//Cristian Rogelio Espinosa Díaz 
//A01702752

//se manda a llamar las bibliotecas y el programa que contienen las clases para que funcionen
#include <iostream>
using namespace std;
#include "caracteristicas.h";

//se crea el menú para que el usuario eliga al personaje (por el momento solo hay un personaje ya que no podía hacer que funcionara)
void menu (){
  cout<<"1. Malphite"<<endl;
  cout<<"2. Salir"<<endl;
  
}

//se crea la función main en donde se guardaran los datos que se imprimiran dependiendo del campeon que el usuario escoga
int main(){
	
    itemizacion malphite= itemizacion("Botas de Mercurio", "Corazón de Hielo", "Hidra Titánica");

    counterPicks malphite1= counterPicks("Garen e Illaoi", "Shen y Mordekaiser");

    runas malphite2= runas("Cometa arcano, Banda de Maná, Trascendencia y Pirolasér","Entrega de galletas y Tónico de distorsión temporal", "2 puntos ofensivos y 1 punto en armadura");
    
//se crea un ciclo while para que el usuario pueda checar los distintos aspectos de los campeones hasta que el decida terminar el programa con la opción salir.
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

