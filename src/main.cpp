#include "lista.h"

void leer(lista &l, const string nomArch);
void mostrar(lista &l);
void guardar(lista &l, const string nomArch);

int main(){
    lista reproduccion;
    leer(reproduccion, "datosCanciones.txt");
    mostrar(reproduccion);
    guardar(reproduccion, "finalCanciones.txt");

    return 0;
}


void leer(lista &l, const string nomArch){
    l.leerArch(l, nomArch);
}

void mostrar(lista &l){
    l.imprimir();
}

void guardar(lista &l, const string nomArch){
	l.guardarArch(l, nomArch);
}

