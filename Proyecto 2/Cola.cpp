#include "Cola.h"

Cola::Cola() {
	this->tamanio = 0;
	this->max = -1;
	this->frente = NULL;
	this->fondo = NULL;
}

int Cola::ObtenerTamanio() {
	return this->tamanio;
}

void Cola::Agregar(string manzana) {
	if (this->max > this->tamanio || this->max == -1) {
		Nodo* nuevo = new Nodo();
		nuevo->ModificarManzana(manzana);
		if (this->frente == NULL && this->fondo == NULL) {
			this->frente = nuevo;
			this->fondo = nuevo;
		}
		else {
			Nodo* aux = this->fondo;
			this->fondo = nuevo;
			aux->ModificarSiguiente(nuevo);
		}
		this->tamanio++;
	}
	else {
		throw "DESBORDAMIENTO DE COLA";
	}
}

string Cola::Recorrer() {
	Nodo* aux = this->frente;
	string resultado = "";
	while (aux != NULL) {
		resultado += aux->ObtenerManzana();
		if (aux != this->fondo)
			resultado += ", ";
		aux = aux->ObtenerSiguiente();
	}
	return resultado;
}

void Cola::Eliminar() {
	if (this->frente == NULL && this->fondo == NULL) {
		throw "ERROR DE SUBDESBORDAMIENTO";
	}
	else {
		if (this->frente == this->fondo) {
			this->frente = NULL;
			this->fondo = NULL;
			this->tamanio = 0;
		}
		else {
			Nodo* aux = this->frente;
			this->frente = this->frente->ObtenerSiguiente();
			aux->ModificarSiguiente(NULL);
			this->tamanio--;
		}
	}
}