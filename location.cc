#include <iostream>

using namespace std;

#include <Vehicule.h>
#include <Utilitaire.h>
#include <Camion.h>
#include <VP.h>

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
	
	Camion c1;
	Camion c2(12,12,"IMMAT_CAMION2", "Marque_camion2", "Modele_camion2", 100);
	
	cout << "---------------------" << endl;
	cout << "Camion sans param" << endl;
	c1.afficher();
	cout << "---------------------" << endl;
	cout << "Camion avec param" << endl;
	c2.afficher();
	c1.setPoidsUtile(12);
	c1.afficher();
	
	VP vp1;
	VP vp2("0012ZZ87", "Porshe", "911 Carrera", 80000, 2 );
	
	cout << "---------------------" << endl;
	cout << "VP sans param" << endl;
	vp1.afficher();
	cout << "---------------------" << endl;
	cout << "VP avec paramètre" << endl;
	vp2.afficher();
	vp1.setNbPlaces(3);
	vp1.afficher();
}
