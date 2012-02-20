using namespace std;

#include <Camion.h>

Camion::Camion(	float poids,
				float volume, 
				string immat, 
				string marque, 
				string modele, 
				int kilom)
					:Utilitaire(volume, immat,marque, modele, kilom) {
	m_poidsUtile = poids;
}

Camion::Camion():Utilitaire() {
	m_poidsUtile = 0;
}

Camion::~Camion() {
}

float Camion::getPoidsUtile() {
	return m_poidsUtile;
}

void Camion::setPoidsUtile(float poids) {
	m_poidsUtile = poids;
}

void Camion::afficher() {
	Utilitaire::afficher();
	cout << "Poids utile : " << m_poidsUtile << endl;
}
