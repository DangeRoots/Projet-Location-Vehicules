using namespace std;

#include <Utilitaire.h>

Utilitaire::Utilitaire(	float volume, 
						string immat, 
						string marque, 
						string modele, 
						int kilom)
							:Vehicule(immat,marque, modele, kilom) {
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
	cout << setw(20) << "Volume utile : " << m_volumeUtile << endl;
}
