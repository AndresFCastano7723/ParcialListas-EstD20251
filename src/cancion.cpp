#include "cancion.h"
#include <iostream>
using std::cout;
using std::endl;

cancion::cancion(){
	setNombre("Sin nombre");
	setCodigo(0);
}

cancion::~cancion(){}

cancion::cancion(string n, int c){
	setNombre(n);
	setCodigo(c);
}

void cancion::setNombre(string n){
	nombre = n;
}

string cancion::getNombre(){
	return nombre;
}

void cancion::setCodigo(int c){
	codigo = c;
}

int cancion::getCodigo(){
	return codigo;
}

void cancion::mostrar(){
	cout << "Nombre:\t" << getNombre() << "\tID:\t" << getCodigo() << endl;
}