#include <string>
#include <iostream>

using namespace std;

#include "../inc/CDate.h"

CDate::CDate(){
	m_jour = 1;
	m_mois = 1;
	m_annee = 2002;	
}

CDate::CDate(const CDate& date){
	m_jour = date.m_jour;
	m_mois = date.m_mois;
	m_annee = date.m_annee;	
}

CDate::CDate(int jour, int mois, int annee){
	m_jour = jour;
	m_mois = mois;
	m_annee = annee;
}

CDate::~CDate(){}


int CDate::GetJour(){
	return m_jour;
}

int CDate::GetMois(){
	return m_mois;
}

int CDate::GetAnnee(){
	return m_annee;
}
	
void CDate::SetJour(int jour){
	//test du jour entre 1 et 31
	m_jour = jour;
}

void CDate::SetMois(int mois){
	// test mois > 0 et mois < 13
	m_mois = mois;
}

void CDate::SetAnnee(int annee){
	m_annee = annee;	
}
std::string CDate::GetStrMois(){
    string tab[12]={"Janvier","Février","Mars","Avril","Mai","Juin",
		  "Juillet","Aout","Septembre","Octobre","Novembre","Décembre"};
  return tab[m_mois-1];
}
void CDate::afficher(){
  cout << m_jour << "/"<< m_mois << "/" << m_annee << endl;
}
