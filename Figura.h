#pragma once

class Figura {
protected:
	double radio;
	double lado;
	double puntas;
	double base;
	double altura;
public:
	Figura(double rad, double lad, double pun, double bas, double alt) {
	
		this->radio = rad;
		this->lado = lad;
		this->puntas = pun;
		this->base = bas;
		this->altura = alt;
	
	}

	virtual double getArea() {
		return 0;
	} ;
	virtual double getPeri() {
		return 0;
	};
	
	virtual string getNombre() = 0;

};


class Circulo : public Figura {
private:
	string nombre = "Circulo";
public:
	
	//solo radio
	Circulo(double rad):Figura(rad, 0, 0, 0, 0) {}

	string getNombre() {
	
		return nombre;
	
	}

	double getArea() {
	
		return radio * radio * 3.14;
	
	}

	double getPeri() {
	
		return 2 * 3.14 * radio;

	}

};

class Triangulo :public Figura {
private:
	string nombre = "Triangulo";

public:

	// base y altura
	Triangulo(double bas, double alt) :Figura(0, 0, 0, bas, alt) {}

	string getNombre() {
	
		return nombre;

	}

	double getArea() {

		return  base * altura;

	}

	double getPeri() {

		return 2*(base + altura);

	}
};

class Cuadrado :public Figura {
private:

	string nombre = "Cuadrado";

public:
	// solo lado
	Cuadrado(double lad) :Figura(0, lad, 0, 0, 0) {}

	string getNombre() {
	
		return nombre;
	
	}

	double getArea() {

		return lado*lado;

	}

	double getPeri() {

		return 4 * lado;

	}
};

class Estrella :public Figura {
private:

	string nombre = "Estrella";

public:
	//lado y puntas
	Estrella(double lad, double pun) :Figura(0, lad, pun, 0, 0) {}

	string getNombre() {
	
		return nombre;

	}

	double getArea() {

		return (1.73 * lado * lado)/4;

	}

	double getPeri() {

		return lado*puntas;

	}
};
