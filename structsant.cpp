#include <iostream>
#include <conio.h>

using namespace std;

int main(){

struct persona{
	string nombre;
	string apellido;
	int dorsal;
	string posicion;
};


persona pers1[30];

pers1[0].nombre = "Carlos";
pers1[0].apellido = "Acevedo";
pers1[0].dorsal = 1;
pers1[0].posicion = "Portero";

pers1[1].nombre = "Gibran";
pers1[1].apellido = "Lajud";
pers1[1].dorsal = 25;
pers1[1].posicion = "Portero";

pers1[2].nombre = "Carlos";
pers1[2].apellido = "Orrantia";
pers1[2].dorsal = 8;
pers1[2].posicion = "Defensa";

pers1[3].nombre = "Matheus";
pers1[3].apellido = "Doria";
pers1[3].dorsal = 21;
pers1[3].posicion = "Defensa";

pers1[4].nombre = "Jonathan";
pers1[4].apellido = "Diaz";
pers1[4].dorsal = 4;
pers1[4].posicion = "Defensa";

pers1[5].nombre = "Areli";
pers1[5].apellido = "Hernandez";
pers1[5].dorsal = 26;
pers1[5].posicion = "Defensa";

pers1[6].nombre = "Felix";
pers1[6].apellido = "Torres";
pers1[6].dorsal = 5;
pers1[6].posicion = "Defensa";

pers1[7].nombre = "Ismael";
pers1[7].apellido = "Govea";
pers1[7].dorsal = 3;
pers1[7].posicion = "Defensa";

pers1[8].nombre = "Jesus";
pers1[8].apellido = "Isijara";
pers1[8].dorsal = 27;
pers1[8].posicion = "Mediocampista";

pers1[9].nombre = "Brian";
pers1[9].apellido = "Lozano";
pers1[9].dorsal = 15;
pers1[9].posicion = "Mediocampista";

pers1[10].nombre = "Ulises";
pers1[10].apellido = "Rivas";
pers1[10].dorsal = 16;
pers1[10].posicion = "Mediocampista";

pers1[11].nombre = "Adrian";
pers1[11].apellido = "Lozano";
pers1[11].dorsal = 13;
pers1[11].posicion = "Mediocampista";

pers1[12].nombre = "Fernando";
pers1[12].apellido = "Gorriaran";
pers1[12].dorsal = 11;
pers1[12].posicion = "Mediocampista";

pers1[13].nombre = "David";
pers1[13].apellido = "Andrade";
pers1[13].dorsal = 14;
pers1[13].posicion = "Mediocampista";

pers1[14].nombre = "Edgar";
pers1[14].apellido = "Games";
pers1[14].dorsal = 201;
pers1[14].posicion = "Mediocampista";

pers1[15].nombre = "Omar";
pers1[15].apellido = "Campos";
pers1[15].dorsal = 190;
pers1[15].posicion = "Mediocampista";

pers1[16].nombre = "Diego";
pers1[16].apellido = "Valdes";
pers1[16].dorsal = 10;
pers1[16].posicion = "Mediocampista";

pers1[17].nombre = "Alan";
pers1[17].apellido = "Cervantes";
pers1[17].dorsal = 6;
pers1[17].posicion = "Mediocampista";

pers1[18].nombre = "Jordan";
pers1[18].apellido = "Carrillo";
pers1[18].dorsal = 202;
pers1[18].posicion = "Mediocampista";

pers1[19].nombre = "Ayrton";
pers1[19].apellido = "Preciado";
pers1[19].dorsal = 32;
pers1[19].posicion = "Delantero";

pers1[20].nombre = "Andres";
pers1[20].apellido = "Ibarguen";
pers1[20].dorsal = 23;
pers1[20].posicion = "Delantero";

pers1[21].nombre = "Santiago";
pers1[21].apellido = "Munoz";
pers1[21].dorsal = 192;
pers1[21].posicion = "Delantero";

pers1[22].nombre = "Ignacio";
pers1[22].apellido = "Jeraldino";
pers1[22].dorsal = 30;
pers1[22].posicion = "Delantero";

pers1[23].nombre = "Jesus";
pers1[23].apellido = "Ocejo";
pers1[23].dorsal = 12;
pers1[23].posicion = "Delantero";

pers1[24].nombre = "Juan";
pers1[24].apellido = "Otero";
pers1[24].dorsal = 7;
pers1[24].posicion = "Delantero";

pers1[25].nombre = "Eduardo";
pers1[25].apellido = "Aguirre";
pers1[25].dorsal = 19;
pers1[25].posicion = "Delantero";



int i; 

system("color 0A");

cout<<"Tomas Manuel Jaramillo Luna"<<endl;
cout<<"Ing. David Ceballos"<<endl;
cout<<"4B"<<endl;
cout<<"El programa usa un arreglo de tipo struct para registrar los datos de los jugadores"<<endl;
cout<<"Los campos del struct son el nombre, apellido, el dorsal y la posicion donde juega el jugador"<<endl;
cout<<"se utiliza un for para imprimir los datos registrados"<<endl;
cout<<endl;
cout<<"***********Plantilla Club Santos Laguna 2021 Pagina Oficial***********"<<endl;

for ( i = 0; i < 26; i++){
cout<<pers1[i].posicion<<" "<<pers1[i].nombre<<" "<<pers1[i].apellido<<" dorsal "<<pers1[i].dorsal<<endl;
}

getch();
return 0;
}

