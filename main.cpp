#include "cliente.cpp"
# include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"Ingresar Nit: ";
	cin>>nit;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;	
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;	
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	//Instancia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	cout<<"Ingresar Nit: ";
	cin>>nit;
	Cliente obj2 = Cliente (nombres,apellidos,direccion,telefono,nit);
	obj2.mostrar();
	
}
