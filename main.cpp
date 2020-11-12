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