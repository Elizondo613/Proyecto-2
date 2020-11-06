#pragma once
#include <string>
using namespace std;
class Nodo
{
private:
	string manzana;
	Nodo* siguiente;
public:
	Nodo();
	Nodo(string manzana, Nodo* siguiente);
	string ObtenerManzana();
	Nodo* ObtenerSiguiente();
	void ModificarManzana(string manzana);
	void ModificarSiguiente(Nodo* siguiente);
};