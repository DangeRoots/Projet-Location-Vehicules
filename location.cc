#include <iostream>

using namespace std;

#include <Vehicule.h>
#include <Utilitaire.h>

int main() {
	Vehicule v1; // Constructeur par défaut
	Vehicule v2("1234XY33", "Peugeot", "304", 22212);// Constructeur avec paramètres
	
	v1.setKilometrage(10);
	v1.setImmatriculation("IMMAT_V1");
	v1.setMarque("Renault");
	v1.setModele("Plastique");
	
	cout << "---------------------" << endl;
	cout << "Vehicule sans param" << endl;
	v1.afficher();
	cout << "---------------------" << endl;
	cout << "Vehicule avec param" << endl;
	v2.afficher();
	
	Utilitaire u1(10.0, "IMMAT_U1", "MARQUE_U1", "MODELE_U1", 200);
	Utilitaire u2;
	
	cout << "---------------------" << endl;
	cout << "Utilitaire avec param" << endl;
	u1.afficher();
	cout << "---------------------" << endl;
	cout << "Utilitaire sans param" << endl;
	u2.afficher();
	
	u2.setKilometrage(30);
	u2.afficher();
}
