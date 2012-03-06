using namespace std;

#include <Utilitaire.h>

Utilitaire::Utilitaire(	float volume, 
						string immat, 
						string marque, 
						string modele)
							:Vehicule(immat,marque, modele) {
	m_volumeUtile = volume;
}

Utilitaire::Utilitaire():Vehicule() {
	m_volumeUtile = 0;
}

Utilitaire::~Utilitaire() {
}

float Utilitaire::getVolumeUtile() {
	return m_volumeUtile;
}

void Utilitaire::setVolumeUtile(float volume) {
	m_volumeUtile = volume;
}

void Utilitaire::afficher() {
	Vehicule::afficher();
	cout << setw(20) << " " // éviter nbPlaces
		 << setw(10) << m_volumeUtile;
}

void Utilitaire::save(fstream &fs) {
	fs << "u " << getImmatriculation() << " " << getMarque() << " " <<  getModele() << " " << m_volumeUtile << " ";
}
