#include <iostream>

using namespace std;

#include <Vehicule.h>

int main() {
	Vehicule v1; // Constructeur par défaut
	Vehicule v2("1234XY33", "Peugeot", "304", 22212);// Constructeur avec paramètres
	
	v1.setKilometrage(10);
	v1.setImmatriculation("IMMAT_V1");
	v1.setMarque("Renault");
	v1.setModele("Plastique");
	
	v1.afficher();
	v2.afficher();
}
