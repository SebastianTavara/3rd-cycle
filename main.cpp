#include "header.hpp"
#include "Nodo.h"

int main() {
	ListaEnlazada lista;
	bool start = true;

	while (start) {

		switch (menu()) {

		case 1:{
			int n = 0;

			cout << "\n> Seleccionaste: Crear nueva figura mágica";
			cout << "\nElige una figura: ";
			cout << "\n1. Circulo";
			cout << "\n2. Triangulo";
			cout << "\n3. Cuadrado";
			cout << "\n4. Estrella";
			cout << "\n>> ";
			cin >> n;
			switch (n)
			{
			case 1: {
				int rad = 0;
				cout << "\nIngrese radio: ";
				cin >> rad;

				Figura* circulo = new Circulo(rad);
				lista.insertarAlInicio(circulo);

				cout << "\nArea: " << circulo->getArea();
				cout << "\nPerimetro: " << circulo->getPeri();

				break;
			}
			case 2: {
				int bas, alt;
				bas = alt = 0;
				cout << "\nIngrese base y altura (ejemplo: 1 2): ";
				cin >> bas >> alt;

				Figura* triangulo = new Triangulo(bas, alt);
				lista.insertarAlInicio(triangulo);

				cout << "\nArea: " << triangulo->getArea();
				cout << "\nPerimetro: " << triangulo->getPeri();

				break;
			}
			case 3: {
				int lad = 0;
				cout << "\nIngrese lado: ";
				cin >> lad;

				Figura* cuadrado = new Cuadrado(lad);
				lista.insertarAlInicio(cuadrado);

				cout << "\nArea: " << cuadrado->getArea();
				cout << "\nPerimetro: " << cuadrado->getPeri();

				break;
			}
			case 4: {
				int lad, pun;
				lad = pun = 0;
				cout << "\nIngrese lado y numero de puntas (ejemplo: 1 2): ";
				cin >> lad >> pun;

				Figura* estrella = new Estrella(lad, pun);
				lista.insertarAlInicio(estrella);

				cout << "\nArea: " << estrella->getArea();
				cout << "\nPerimetro: " << estrella->getPeri();
				break;
			}
			default:
				break;
			}

			break;
		}
		case 2:
			lista.MostrarElementos();
			break;
		case 3: { // corregir
			int eleccionDeHechizo = 0;
			cout << "\n> Seleccionaste: Lanzar hechizos";
			cout << "\nElige una figura(1 - 3): ";
			cin >> eleccionDeHechizo;

			LanzamientoHechizos(eleccionDeHechizo);

			break;
		}
		case 4: {
			int n1, n2;
			n1 = n2 = 0;
			cout << "\nINGREDIENTES DISPONIBLES :";
			cout << "\n1. Polvo de Luna(4.5g)";
			cout << "\n2. Esmeralda Triturada(3)";
			cout << "\n3. Lágrima de Fénix(1 vial)";
			cout << "\n4. escama de sirena(1.8 gr)";
			cout << "\nElige dos opciones(ej: 1 3): ";
			cin >> n1 >> n2;

			cout<<"La suma de los ingredientes es: "<<laboratorioAlquimia(n1, n2);

			break;
		}
		case 5:

			torreDeBabel(1, 0);

			break;
		case 6: {
			char rpta = 0;
			cout << "Seguro que quieres salir?(S/N): ";
			cin >> rpta;
			if (rpta == 'S') {

				start = false;

				cout << "\n\nPresione enter para salir";
			}

			break;
		}
 		default:
			break;
		}

		system("pause>0");

	}

	return 0;
}

