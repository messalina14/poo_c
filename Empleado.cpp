#include "persona.cpp"
#include <iostream>
using namespace std;
class Empleado : Persona{
	private : string codigo_empleado; int sueldo; string puesto;
	
	public:
	Empleado(){
	} 
	Empleado (string nom,string ape, string dir, int tel,string cp, int s, string p): Persona(nom, ape, dir, tel){
		codigo_empleado = cp;
		sueldo =s;
		puesto = p;
	}


 void setCodigo_empleado(string cp){codigo_empleado = cp;}
 void setNombres(string nom){nombres = nom;}
 void setApellidos(string ape){apellidos = ape;}
 void setSueldo(int s){ sueldo = s; }
 void setPuesto(string p){ puesto = p;}
 void setDireccion(string dir){direccion = dir;}
 void setTelefono(int tel){telefono = tel;}
 
 string getCodigo_empleado(){return codigo_empleado;}
 string getNombres(){	return nombres;}
 string getApellidos(){	return apellidos;}
 int getSueldo(){ return sueldo; }
 string getPuesto(){ return puesto; }
 string getDireccion(){	return direccion;}
 int getTelefono(){	return telefono;}
 
void mostrar(){
	cout<<" ";
	cout<<codigo_empleado<<","<<","<<nombres<<","<<apellidos<<","<<sueldo<<","<<puesto<<","<<direccion<<","<<telefono<<endl;
}
};
