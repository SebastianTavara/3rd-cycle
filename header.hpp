#pragma once
#include <iostream>

using namespace std;

void clear() {

	system("cls");

};

int menu() {

	// respuesta del jugador
	int resp = 0;

	do {
		clear();
		cout << "\nPORTADA DEL LIBRO MÁGICO";
		cout << "\n==================================";
		cout << "\nREINO DE LAS FIGURAS MÁGICAS";
		cout << "\nNivel : Aprendiz de Hechicero";
		cout << "\n==================================";
		cout << "\nMENÚ PRINCIPAL";
		cout << "\n1. Crear nueva figura mágica";
		cout << "\n2. Mostrar libro completo";
		cout << "\n3. Lanzar hechizos";
		cout << "\n4. Preparar poción alquímica";
		cout << "\n5. Explorar la Torre Encantada";
		cout << "\n6. Salir del programa";
		cout << "\n\n>> ";
		cin >> resp;

	} while (resp < 1 || resp>6);
	cout << "\n";
	return resp;

}
//OP 3:  lambda hecho / arrays std hecho
// hechizos: Circular position!, Triangulus fortis!, Cuadradus Makabrus! 

struct hechizo {
	string nombre,
		efecto,
		duracion,
		areaAfectada;
	hechizo(string nom, string efec, string dur, string area) {
	
		nombre = nom;
		efecto = efec;
		duracion = dur;
		areaAfectada = area;
	
	}
};

hechizo circulo("Circular Postion!", "Vida 150 hp", "150 seg", "1 m2");
hechizo triangulo("Traingulus Fortis!", "Crea un escudo protector", "60 seg", "6 m2");
hechizo cuadrado("Cuadradus Makabrus!", "Incapacita al enemigo", "5 seg", "1 m2");

hechizo hechizos[3] = { circulo, triangulo, cuadrado };

void LanzamientoHechizos(int numHechizo) {

	auto verificarNumero = [](int n, int max, int min)->bool {

		if (n > max || n < min) {

			return false;
		}

		return true;

		};

	if (!verificarNumero(numHechizo, 3, 1)) {
		cout << "\nERROR - numero elegido incorrecto";
		return;
	}

	cout << "\n" << hechizos[numHechizo - 1].nombre;
	cout << "\n\n" <<"Efecto: " << hechizos[numHechizo - 1].efecto;
	cout << "\n\n"<< "Duracion: " << hechizos[numHechizo - 1].duracion;
	cout << "\n\n"<<"Area Afectada: " << hechizos[numHechizo - 1].areaAfectada;

}

//OP : 4 Laboratorio alquimia 
// templates

double alquimia[4] = { 4.5, 3, 1, 1.8 };

template <typename mezcla>
mezcla laboratorioAlquimia(mezcla ingre, mezcla mez) {

	return alquimia[ingre - 1] + alquimia[mez - 1];
}

//OP : 5 Torre de babel 
// Recursividad

bool resolverAcertijo(int nivel) {

	switch (nivel)
	{
	case 1: {
		int n = 0;
		cout << "\n\n¿Cual es el cuadrado del primer numero primo?\n>> ";
		cin >> n;

		return n == 4;

		break;
	}
	case 2: {
		int n = 0;
		cout << "\n\n¿Cuanto es 3 * 6 + 2?\n>> ";
		cin >> n;

		return n == 20;

		break;
	}
	case 3: {
		int n = 0;
		cout << "\n\n¿Cuanto es 2^2 + 3/4 * 4?\n>> ";
		cin >> n;

		return n == 7;

		break;
	}

	case 4: {
		int n = 0;
		cout << "\n\nEn f(x) = x^2 + 2x - 7";
		cout << "\nCalcule: f(5) + f(2)\n>> ";
		cin >> n;

		return n == 29;

		break;
	}

	default:
		break;
	}

}


int torreDeBabel(int pisoActual, int puntajeAcumulado) {
	int puntaje = 0;

	if (pisoActual >= 5) {
	
		return puntajeAcumulado;
	
	}

	if (resolverAcertijo(pisoActual)) {
		puntaje = pisoActual * 12;
		
		cout << "\n\nCORRECTO - Has ganando " << puntaje << " puntos";
		return torreDeBabel(pisoActual + 1, puntajeAcumulado + puntaje);
	
	}
	else {
	
		cout << "\n\nIncorrecto - Has llegado al nivel " << pisoActual << " con un puntaje de "<<puntajeAcumulado;
		return puntajeAcumulado;
	}


}
