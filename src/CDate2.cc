#include <string>
#include <iostream>

using namespace std;

#include "../inc/CDate2.h"

CDate2::CDate2(){
	m_jour = 1;
	m_mois = 1;
	m_annee = 2002;	
}

CDate2::CDate2(const CDate2& date){
	m_jour = date.m_jour;
	m_mois = date.m_mois;
	m_annee = date.m_annee;	
}

CDate2::CDate2(int jour, int mois, int annee){
	m_jour = jour;
	m_mois = mois;
	m_annee = annee;
}

CDate2::~CDate2(){}

std::string CDate2::GetStrMois(){
    string tab[12]={"Janvier","Février","Mars","Avril","Mai","Juin",
		  "Juillet","Aout","Septembre","Octobre","Novembre","Décembre"};
  return tab[m_mois-1];
}

int CDate2::nbJours (int mois, int annee){
	// Si c'est février, c'est exceptionel
		if( mois == 2 )
		return ( estBissextile(annee) ? 29 : 28 );
	// Autre mois
		if (mois == 1||mois == 3||mois == 5||mois == 7||mois == 8||mois == 10||mois ==12)
		return 31;
		else return 30;
}

bool CDate2::estBissextile(int annee){
	// Si l'année est divisible par 4, et non par 100 = ok
	if( annee %4 == 0 && annee %100 != 0)
		return true;
	// Sinon par 400 = ok
	else if ( annee % 400 == 0)
		return true;
	else return false;
}

bool CDate2::validerDate( int jour, int mois, int annee){
	if( mois < 0 || mois > 12 )
		return false;
	if (jour < 0 || jour > nbJours(mois,annee))
		return false;
	return true;
}
void CDate2::affichageStandard(){
	cout << m_jour <<"/"<< m_mois <<"/"<< m_annee <<endl;
}

