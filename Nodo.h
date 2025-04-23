#pragma once
#include "Figura.h"
#include <iostream>

using namespace std;

class Nodo {
public:
	
	Figura* figura;
	Nodo* siguiente;

	Nodo(Figura* fig)
	{
	
		figura = fig;
		siguiente = nullptr;
	
	}
};


class ListaEnlazada {
private:
	Nodo* cabeza;
public:
	ListaEnlazada() {
		cabeza = nullptr;
	}

	//metodos

	void insertarAlInicio(Figura* fig) {

		Nodo* nuevo = new Nodo(fig);

		if (cabeza == nullptr) {

			cabeza = nuevo;

		}
		else {

			nuevo->siguiente = cabeza;
			cabeza = nuevo;

		}

	}

	//metodo mostrar elementos
	void MostrarElementos()
	{
		if (cabeza == nullptr)
		{
			cout << "\n" << "LISTA VACIA";
		}
		else
		{
			Nodo* actual = cabeza;
			while (actual != nullptr)
			{
				cout << "\n\n" << actual->figura->getNombre();
				cout <<"\n" << "El area de la figura es: " << actual->figura->getArea();
				cout <<"\n" << "El perimetro de la figura es: " << actual->figura->getPeri();

				actual = actual->siguiente;
			}
		}

	}

};