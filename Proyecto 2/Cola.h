#pragma once
#include "Nodo.h"

class Cola
{
private:
	int tamanio;
	int max;
	Nodo* frente;
	Nodo* fondo;

public:
	Cola();
	void Agregar(string manzana);
	void Eliminar();
	string Recorrer();
	int ObtenerTamanio();
};

