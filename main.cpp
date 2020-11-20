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

    runas_s malphite3= runas_s("Cometa arcano", "Banda de Maná", "Trascendencia", "Pirolasér","Entrega de galleta","Tónico de distorsión temporal");
    

    
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
          cout<<""<<endl;

          cout<<malphite3.get_runa1()<<endl;
          cout<<""<<endl;
          
          cout<<malphite3.get_runa2()<<endl;
          cout<<""<<endl;
          
          cout<<malphite3.get_runa3()<<endl;
          cout<<""<<endl;

          cout<<malphite3.get_runa4()<<endl;
          cout<<""<<endl;

          cout<<"Las runas secundarias son:"<<endl;
          cout<<""<<endl;

          cout<<malphite3.get_runas1()<<endl;
          cout<<""<<endl;

          cout<<malphite3.get_runas2()<<endl;
          cout<<""<<endl;
        }
        else if (eleccion=="Salir"||eleccion=="salir"){
          cout<<"Adiós, invocador"<<endl;
          exit(-1);
        
        }
        else {
          cout<<"Lo sentimos invocador pero ese personaje no existe o no ha sido registrado a la base de datos"<<endl;
          cout<<""<<endl;
          cout<<"Intenta otra vez"<<endl;
      }
    }
  }
