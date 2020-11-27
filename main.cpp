// Proyecto avance 1
//Cristian Rogelio Espinosa Díaz 
//A01702752

#include <iostream>
using namespace std;
#include "toplane.h"

void menu (){
  cout<<"1. Malphite"<<endl;
  cout<<"2. Volibear"<<endl;
  cout<<"3. Mordekaiser"<<endl;
  cout<<"4. Salir"<<endl;
  
}

int main(){
  
  bool ciclo = true;
    while (ciclo){
      menu();
        string eleccion;
        std::cout << "Ingresa el nombre de tu campeon: ";
        std::cin >> eleccion;

        if (eleccion=="Maplhite"||eleccion=="malphite"){
          cout<<""<<endl;
          toplane malphite;
          malphite.agregaitems(1,"Botas de Mercurio", "Corazón de Hielo", "Hidra Titánica");
          malphite.agregapicks(1,"Garen e Illaoi", "Shen y Mordekaiser");
          malphite.agregarunas(1,"Cometa arcano", "Banda de Maná", "Trascendencia", "Pirolasér","Entrega de galleta","Tónico de distorsión temporal");
          malphite.muestra_items();
          cout<<""<<endl;
          malphite.muestra_picks();
          cout<<""<<endl;
          malphite.muestra_runas();
        }
        else if (eleccion=="Volibear"||eleccion=="volibear"){
          cout<<""<<endl;
          toplane volibear;
          volibear.agregaitems(1,"Botas blindadas", "Égida de fuego solar", "Placa del hombre muerto");
          volibear.agregapicks(1,"Viktor, Kayle y Heirmendinger","Tryndamare, Rumble y Warwick");
          volibear.agregarunas(1,"Ataque intensificado","Triunfo","Tenacidad","Último esfuerzo","Calzado mágico","Perspicacia cósmica");
          volibear.muestra_items();
          cout<<""<<endl;
          volibear.muestra_picks();
          cout<<""<<endl;
          volibear.muestra_runas();
        }
        else if (eleccion=="Mordekaiser"||eleccion=="mordekaiser"){
          cout<<""<<endl;
          toplane mordekaiser;
          mordekaiser.agregaitems(1,"Botas blindadas","Agrietador","Apariencia fantasmal");
          mordekaiser.agregapicks(1,"Viktor, Kayle y Heirmendinger","Illaoi, Kalista y Tryndamere");
          mordekaiser.agregarunas(1,"Conquistador","Triunfo","Tenacidad","Último esfuerzo","Sabor a sangre","Cazador voraz");
          mordekaiser.muestra_items();
          cout<<""<<endl;
          mordekaiser.muestra_picks();
          cout<<""<<endl;
          mordekaiser.muestra_runas();
        }

        else if (eleccion=="Salir"||eleccion=="salir"){
          cout<<"Adiós invocador"<<endl;
          exit(-1);
        
        }
        else {
          cout<<"Lo sentimos invocador pero ese personaje no existe o no ha sido registrado a la base de datos"<<endl;
          cout<<""<<endl;
          cout<<"Intenta otra vez"<<endl;
        }
    }
}
