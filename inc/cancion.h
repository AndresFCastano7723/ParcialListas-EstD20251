#ifndef CANCION_H
#define CANCION_H
#include <string>
using std::string;

class cancion
{
private:
	string nombre;
	int codigo;
public:
	cancion();
	~cancion();
	cancion(string,int);
	void setNombre(string);
	string getNombre();
	void setCodigo(int);
	int getCodigo();
	void mostrar();
};

#endif