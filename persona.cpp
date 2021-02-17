#include <iostream>
using namespace std;
class Persona{
	//atributos 
	protected : string nombres,apellidos,direccion;
				int telefono;
	//construto
	protected : 
			Persona(){
			}
			Persona(string nom, string ape, string dir, int tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				telefono = tel;
			}
			
	//metodo
	void mostrar();
};
