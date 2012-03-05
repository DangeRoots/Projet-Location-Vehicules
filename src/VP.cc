using namespace std;

#include <VP.h>

VP::VP(string immat, string marque, string modele, int nbPlaces):Vehicule(immat, marque, modele){

	m_nbPlaces = nbPlaces;
}
	
VP::VP():Vehicule(){
	
	m_nbPlaces = 0;
};

VP::~VP(){
	// cout << "Destructeur de VP" << endl;
}

int VP::getNbPlaces(){

	return m_nbPlaces;
}

void VP::setNbPlaces(int nbPlaces){
	
	m_nbPlaces = nbPlaces;
}

void VP::afficher(){
	Vehicule::afficher();
	cout << setw(10) << m_nbPlaces
		 << setw(20) << " ";
}


void VP::save(fstream &fs) {
	fs << "v " << getImmatriculation() << " " << getMarque() << " " <<  getModele() << " " << m_nbPlaces << " ";
}
