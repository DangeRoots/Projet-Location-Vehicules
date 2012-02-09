// Tests Classe Date Améliorée
// Auteur Icham Sirat 2011

// -> estBissextile() renvoie vrai ou faux si une année passée en paramètre
// est bissextile ou non.
// -> nbJours() renvoie le nombre de jours que contient un mois, en prenant 
// en compte pour février si c'est une année bissextile ou pas.
// A la fin du code, exemples d'années bissextiles.
// Mes différents tests se sont bien passés  


#include <string>
#include <iostream>

using namespace std;


bool estBissextile(int Annee){
		
		if( Annee %4 == 0 && Annee %100 != 0)
			return true;
		else if ( Annee % 400 == 0)
			return true;
		else return false;
}
// Retourne le nombre de jour que contient un mois d'une année précise
int nbJoursMois( int Mois, int Annee ){
	// Si c'est février, c'est exceptionel
		if( Mois == 2 )
		return ( estBissextile( Annee ) ? 29 : 28 );
	// Autre mois
		if (Mois == 1||Mois == 3||Mois == 5||Mois == 7||Mois == 8||Mois == 10||Mois ==12)
		return 31;
		else return 30;
}

int main (){
	int Annee = 2016;
	int Mois = 3;
	cout << nbJoursMois (Mois, Annee);
	//if (estBissextile(Annee)) cout << "ok";
	//else cout << "non bissextile";
}	
	
/* Test d'année bissextile
2012	29 février 2012
2016	29 février 2016
2020	29 février 2020
2024	29 février 2024
2028	29 février 2028
2032	29 février 2032
2036	29 février 2036
2040	29 février 2040
2044	29 février 2044
2048	29 février 2048
2052	29 février 2052
2056	29 février 2056
2060	29 février 2060
2064	29 février 2064
2068	29 février 2068
2072	
2076
*/
