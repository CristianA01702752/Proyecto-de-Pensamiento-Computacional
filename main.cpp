// Proyecto avance 1
//Cristian Rogelio Espinosa Díaz 
//A01702752

#include <iostream>
using namespace std;
#include "caracteristicas.h"

void menu (){
  cout<<"1. Malphite"<<endl;
  cout<<"2. Salir"<<endl;
  
}

int main(){
  
itemizacion malphite= itemizacion("Botas de Mercurio", "Corazón de Hielo", "Hidra Titánica");

counterPicks malphite1= counterPicks("Garen e Illaoi", "Shen y Mordekaiser");

runas malphite2= runas("Cometa arcano, Banda de Maná, Trascendencia y Pirolasér","Entrega de galletas y Tónico de distorsión temporal", "2 puntos ofensivos y 1 punto en armadura");
    

    
    bool ciclo = true;
    while (ciclo){
      menu();
        string eleccion;
        std::cout << "Ingresa el nombre de tu campeon: ";
        std::cin >> eleccion;
    
        if (eleccion=="Maplhite"||eleccion=="malphite"){
          cout<<""<<endl;
          
          cout<<"Las botas más utilizadas con Malphite son: "<<malphite.get_botas()<<endl;
          cout<<""<<endl;

          cout<<"El objeto defensivo más usado con Malphite es: "<<malphite.get_defensivos()<<endl;
          cout<<""<<endl;
          
          cout<<"El objeto ofensivo más usado con Malphite es: "<<malphite.get_ofensivos()<<endl;
          cout<<""<<endl;
          
          cout<<"Malphite es débil al enfrentarse contra: "<<malphite1.get_enemigosF()<<endl;
          cout<<""<<endl;
          
          cout<<"Malphite es fuerte al enfrentarse contra: "<<malphite1.get_enemigosD()<<endl;
          cout<<""<<endl;
          
          cout<<"Las runas principales son:"<<endl;
          cout<<malphite2.get_runasp()<<endl;
          cout<<""<<endl;
          
          cout<<"Las runas secundarias son: "<<endl;
          cout<<malphite2.get_runass()<<endl;
          cout<<""<<endl;
          
          cout<<"Las runas terciarias son: "<<endl;
          cout<<malphite2.get_runast()<<endl;
          cout<<""<<endl;
        }
        else if (eleccion=="Salir"||eleccion=="salir"){
          cout<<"Adiós, invocador"<<endl;
          exit(-1);
      }
    }
  }
