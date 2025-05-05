#include <iostream>
#include <conio.h>
using namespace std;
//Clase padre Persona
class Persona{
	private:
		int edad;
		string nombre;
	public:
		Persona(int, string);
		void mostrarpersona();
};
//Clase hija ALumno
class Alumno: public Persona{
	private://Atributos
	int nCTRL;
	double calif;
	public:
		//Constructor de la clase
		Alumno(int, string, int, double);
		void mostraralumno();
};
//Clase Hija Profesor
class Profesor: public Persona{
	private://Atributos
		int id;
		int horas;
	public:
		Profesor(int, string, int, int);
		void mostrarProfesor();
};

Alumno::Alumno(int _edad, string _nombre, int _nCTRL, double _calif):Persona(_edad, _nombre){
nCTRL=_nCTRL;
calif=_calif;	
}

Profesor::Profesor(int _edad, string _nombre, int _id, int _horas):Persona(_edad, _nombre){
id=_id;
horas=_horas;	
}
Persona::Persona(int _edad, string _nombre){
	edad = _edad;
	nombre = _nombre;
}
void Persona::mostrarpersona(){
	cout<<"Mi nombre es: "<<nombre<<endl;
	cout<<"Mi edad es: "<<edad<<endl;
}
void Alumno::mostraralumno(){
	Persona::mostrarpersona();
	cout<<"Mi numero de control es: "<<nCTRL<<endl;
	cout<<"Mi calificacion es: "<<calif<<endl;

}
void Profesor::mostrarProfesor(){
	Persona::mostrarpersona();
	cout<<"Mi ID es: "<<id<<endl;
	cout<<"Mis horas frente al grupo son: "<<horas<<endl;
}

int main(){
	int id, horas, edad, nCTRL;
	double calif;
	string nombre, opc;
	cout<<"Indique si es maestro con M Y Alumno con A"<<endl;
	cin>>opc;
		if(opc=="M"){
			cout<<"Nombre: ";
			cin>>nombre;
			cout<<endl;
			cout<<"Edad: ";
			cin>>edad;
			cout<<endl;
			cout<<"Numero de ID: ";
			cin>>id;
			cout<<endl;
			cout<<"Horas: ";
			cin>>horas;
			cout<<endl;
			//Instanciacion de la clase Profesor, en que clase se realizara la operacion 
			Profesor profesor(edad, nombre, id, horas);
			profesor.mostrarProfesor(); 
		}else{
			cout<<"Nombre: ";
			cin>>nombre;
			cout<<endl;
			cout<<"Edad: ";
			cin>>edad;
			cout<<endl;
			cout<<"Numero de control es: ";
			cin>>nCTRL;
			cout<<endl;
			cout<<"Calificacion: ";
			cin>>calif;
			cout<<endl;
			//Instancia de la clase Alumno, donde se realizaran las operaciones
			Alumno alumno(edad, nombre, nCTRL, calif);
			alumno.mostraralumno();
		}
	
	
	getch();
	return 0;
	
}

