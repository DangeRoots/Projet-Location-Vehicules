#include <string>
#include <iostream>

using namespace std;

#include "../inc/Vehicule.h"
#include "../inc/Immat.h"

Immat::Immat(){
	m_immatriculation = "NULL";
}

Immat::Immat(string immat){
	m_immatriculation = immat;
}

Immat::~Immat(){}

string Immat::getImmat(){
	return m_immatriculation;
	}

void Immat::setImmat(string immat){
	m_immatriculation = immat;
}

void Immat::afficher(){
	cout << m_immatriculation;
}
