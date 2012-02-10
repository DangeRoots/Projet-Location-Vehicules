#include <string>
#include <iostream>

using namespace std;

#include <Vehicule.h>
#include <VP.h>

VP::VP(string immat, string marque, string modele, int kilometrage, int nbPlaces):Vehicule(immat, marque, modele, kilometrage){

	m_nbPlaces = nbPlaces;
}
	
VP::VP():Vehicule(){
	
	m_nbPlaces = 0;
};

VP::~VP(){}

int VP::getNbPlaces(){

	return m_nbPlaces;
}

void VP::setNbPlaces(int nbPlaces){
	
	m_nbPlaces = nbPlaces;
}

void VP::afficher(){
	
	Vehicule::afficher();
	cout << "Nombre de places : " << m_nbPlaces << endl;
}
