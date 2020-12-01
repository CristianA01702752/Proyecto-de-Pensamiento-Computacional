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
  cout<<"4. Shen"<<endl;
  cout<<"5. Sion"<<endl;
  cout<<"6. Akali"<<endl;
  cout<<"7. Maokai"<<endl;
  cout<<"8. Cho'Gath"<<endl;
  cout<<"9. Kennen"<<endl;
  cout<<"10. Nasus"<<endl;
  cout<<"Salir"<<endl;
  
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
          malphite.agregaitems(1,"Botas de mercurio", "Corazón de hielo", "Hidra titánica");
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
        else if (eleccion=="Shen"||eleccion=="shen"){
          cout<<""<<endl;
          toplane shen;
          shen.agregaitems(1,"Botas blindadas","Égida de fuego solar","Hidra titánica");
          shen.agregapicks(1,"Kled, Kayle y Teemo","Yone, Yasuo y Irelia");
          shen.agregarunas(1,"Garras del inmortal","Golpe de escudo","Fuerzas renovadas","Sobrecalentamiento","Golpe bajo","Cazador definitivo");
          shen.muestra_items();
          cout<<""<<endl;
          shen.muestra_picks();
          cout<<""<<endl;
          shen.muestra_runas();
        }
        else if (eleccion=="Sion"||eleccion=="sion"){
          cout<<""<<endl;
          toplane sion;
          sion.agregaitems(1,"Botas blindadas","Chaleco de zarzas","Malla de espinas");
          sion.agregapicks(1,"Olaf, Singed y Zac","Yone, Yasuo y Yorick");
          sion.agregarunas(1,"Garras del inmortal","Golpe de escudo","Revestimiento de huesos","Sobrecalentamiento","Entrega de galletas","Tónico de distorsión temporal");
          sion.muestra_items();
          cout<<""<<endl;
          sion.muestra_picks();
          cout<<""<<endl;
          sion.muestra_runas();
        }
        else if (eleccion=="Akali"||eleccion=="akali"){
          cout<<""<<endl;
          toplane akali;
          akali.agregaitems(1,"Botas de hechicero","Creagrietas","Reloj de arena de zhonya");
          akali.agregapicks(1,"Swain, Brand y Morgana","Yone, Yasuo y Cho'gath");
          akali.agregarunas(1,"Pies veloces","Claridad mental","Tenacidad","Golpe de gracia","Sabor a sangre","Cazador voraz");
          akali.muestra_items();
          cout<<""<<endl;
          akali.muestra_picks();
          cout<<""<<endl;
          akali.muestra_runas();
        }
        else if (eleccion=="Maokai"||eleccion=="maokai"){
          cout<<""<<endl;
          toplane maokai;
          maokai.agregaitems(1,"Botas de mercurio","Chaleco de zarzas","Rostro espiritual");
          maokai.agregapicks(1,"Kled, Viktor y Kayle","Kalista, Yasuo y Gangplank");
          maokai.agregarunas(1,"Garras del inmortal","Demoler","Condicionamiento","Sobrecalentamiento","Entrega de galletas","Tónico de distorsión temporal");
          maokai.muestra_items();
          cout<<""<<endl;
          maokai.muestra_picks();
          cout<<""<<endl;
          maokai.muestra_runas();
        }
        else if (eleccion=="Cho'Gath"||eleccion=="cho'gath"){
          cout<<""<<endl;
          toplane chogath;
          chogath.agregaitems(1,"Botas blindadas","Guantelete de fuego escarchado","Malla de espinas");
          chogath.agregapicks(1,"Poppy, Viktor y Kled","Kalista, Yasuo y Ryze");
          chogath.agregarunas(1,"Garras del inmortal","Demoler","Condicionamiento","Sobrecalentamiento","Claridad mental","Presteza");
          chogath.muestra_items();
          cout<<""<<endl;
          chogath.muestra_picks();
          cout<<""<<endl;
          chogath.muestra_runas();
        }
        else if (eleccion=="Kennen"||eleccion=="kennen"){
          cout<<""<<endl;
          toplane kennen;
          kennen.agregaitems(1,"Botas de hechicero","Cintomisil hextech","Reloj de arena de zhonya");
          kennen.agregapicks(1,"Rumble, Kalista y Kayle","Ryze, Yone y Dr.Mundo");
          kennen.agregarunas(1,"Libro de hechizos","Calzado mágico","Desmaterializador de súbditos","Perspicacia cósmica","Sabor a sangre","Cazador voraz");
          kennen.muestra_items();
          cout<<""<<endl;
          kennen.muestra_picks();
          cout<<""<<endl;
          kennen.muestra_runas();
        }
        else if (eleccion=="Nasus"||eleccion=="nasus"){
          cout<<""<<endl;
          toplane nasus;
          nasus.agregaitems(1,"Botas de mercurio","Corazón de hielo","Desgarrador divino");
          nasus.agregapicks(1,"Shen, Volibear y Sion","Vladimir, Yasuo y Kalista");
          nasus.agregarunas(1,"Libro de hechizos","Calzado mágico","Entrega de galletas","Perspicacia cósmica","Capa del nimbo","Trascendencia");
          nasus.muestra_items();
          cout<<""<<endl;
          nasus.muestra_picks();
          cout<<""<<endl;
          nasus.muestra_runas();
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
