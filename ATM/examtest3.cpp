#include <iostream>
#include <conio.h>
using namespace std;

void ing();
void ing2();
void ing3();
void ret();
void ret2();
void ret3();
void log();
void menu();
void menu2();
void menu3();
void cons();
void cons2();
void cons3();
//*******Struct Banco, base de datos*********
struct Banco{
	char name[20];
	int saldo;
}
usuario1 = {"Saul",14000},
usuario2 = {"Manuel",10000},
usuario3 = {"Alejandro",6000};
//*****Voids ingresos*****
void ing(){	
int deposito;
cout<<"Cuanto dinero desea ingresar a la cuenta"<<endl;
cin>>deposito;
usuario1.saldo=usuario1.saldo+deposito;
cout<<"\nSu saldo ahora es: "<<usuario1.saldo<<" mxn"<<endl;
}
void ing2(){	
int deposito;

cout<<"Cuanto dinero desea ingresar a la cuenta"<<endl;
cin>>deposito;
usuario2.saldo=usuario2.saldo+deposito;
cout<<"\nSu saldo ahora es: "<<usuario2.saldo<<" mxn"<<endl;
}
void ing3(){	
int deposito;

cout<<"Cuanto dinero desea ingresar a la cuenta"<<endl;
cin>>deposito;
usuario3.saldo=usuario3.saldo+deposito;
cout<<"\nSu saldo ahora es: "<<usuario3.saldo<<" mxn"<<endl;
}
//*****voids retiros*****
void ret(){
int retiro;
cout<<"Cuanto dinero deseas retirar"<<endl;
cin>>retiro;
usuario1.saldo=usuario1.saldo-retiro;
cout<<"\nSu saldo ahora es: "<<usuario1.saldo<<" mxn"<<endl;
}
void ret2(){
int retiro;
cout<<"Cuanto dinero deseas retirar"<<endl;
cin>>retiro;
usuario2.saldo=usuario2.saldo-retiro;
cout<<"\nSu saldo ahora es: "<<usuario2.saldo<<" mxn"<<endl;
}
void ret3(){
int retiro;
cout<<"Cuanto dinero deseas retirar"<<endl;
cin>>retiro;
usuario3.saldo=usuario3.saldo-retiro;
cout<<"\nSu saldo ahora es: "<<usuario3.saldo<<" mxn"<<endl;
}
//*****Voids consultas*****
void cons(){
cout<<"Su saldo es: "<<usuario1.saldo<<" mxn"<<endl;
}
void cons2(){
cout<<"Su saldo es: "<<usuario2.saldo<<" mxn"<<endl;
}
void cons3(){	
cout<<"Su saldo es: "<<usuario3.saldo<<" mxn"<<endl;
}
//*****Void de autentificacion de tarjetas y contraseñas*****
void log(){

int tarjeta,nip;

cout<<"Bienvenido"<<endl;
cout<<"Porfavor ingrese su tarjeta"<<endl;
cin>>tarjeta;
cout<<"Ingrese nip"<<endl;
cin>>nip;

	if (tarjeta==123 && nip==123){
		cout<<"Bienvenido "<<usuario1.name<<endl;
		menu();
		
	}else if(tarjeta==456 && nip==123){//Uso de && para que se cumplan dos sentencias
		cout<<"Bienvenido "<<usuario2.name<<endl;
		menu();
		
	}else if(tarjeta==789 && nip==123){
		
		cout<<"Bienvenido "<<usuario3.name<<endl;
		menu();
	
	}else{
			cout<<"Usuario/nip incorrecto(s)"<<endl;
	
}//Fin else 
}//fin void login
//*******void menu*******
void menu(){
int op;
char op2;
do{//***********Inicio condicional repetir menu*********** 
cout<<"Que operacion deseas realizar"<<endl;
cout<<"1-Ingresar dinero"<<endl;
cout<<"2.-Retirar dinero"<<endl;
cout<<"3.-Consultar Saldo"<<endl;
cout<<"4.-Salir"<<endl;
cin>>op;
switch(op){
	case 1:
		op=1;
		ing();
		break;
	case 2:
		op=2;
		ret();
		break;
	case 3:
		op=3;
		cons();
		break;
	case 4:
		op=4;
		exit(1);
}//Fin switch
cout<<"Continuar haciendo operaciones S/N"<<endl;
cin>>op2;
}while(op2=='s'||op2=='S');//*******Fin condicion repetir menu******
};//Fin menu
//*********************************PROCESO PRINCIPAL**********************************************
int main(){//******Inicio int main******
log();	
	getch();
	return 0;
}//******Final Int Main******
