#include <string>
#include <iostream>

using namespace std;

#include "../inc/Constructeur.h"
#include "../inc/Vehicule.h"

Constructeur::Constructeur(){
	m_nomConstructeur = "NULL";
}

Constructeur::Constructeur(string nomConstructeur){
	m_nomConstructeur = nomConstructeur;
}

Constructeur::~Constructeur(){}

string Constructeur::getConstructeur(){
	return m_nomConstructeur;
}

void Constructeur::setConstructeur(string nomConstructeur){
	m_nomConstructeur = nomConstructeur;
}

void Constructeur::afficher(){
	cout << m_nomConstructeur;
}
