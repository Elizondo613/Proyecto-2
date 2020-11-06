#include "Nodo.h"

Nodo::Nodo() {
	this->manzana = "";
	this->siguiente = NULL;
}

Nodo::Nodo(string manzana, Nodo* siguiente) {
	this->manzana = manzana;
	this->siguiente = siguiente;
}

string Nodo::ObtenerManzana() {
	return this->manzana;
}

Nodo* Nodo::ObtenerSiguiente() {
	return this->siguiente;
}

void Nodo::ModificarManzana(string manzana) {
	this->manzana = manzana;
}

void Nodo::ModificarSiguiente(Nodo* siguiente) {
	this->siguiente = siguiente;
}
