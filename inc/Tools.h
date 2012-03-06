#ifndef TOOLS_H
#define TOOLS_H

/*!
* \file Tools.h
* \brief Utilitaires variés
* \author Gilles Coulais
* \version 0.3
*/

/*! 
* \class Tools
* \brief Utilitaires de manipulation de chaînes, détection et conversion d'entiers et réels
*
*  Cette classe fournit un certain nombre de fonctions utilitaires, utilisables via des méthodes statiques.
*  - Conversion de chaînes de caractères en majuscules et minuscules
*  - fonction de vérification et conversion d'entiers et réels depuis des chaînes de caractères
*/

class Tools {
	
	public:
	   /*!
		 *  \brief donne le minimum
		 *
		 *  Renvoie le plus petite valeur entre deux entiers fournis en paramètre
		 *
		 *  \param [in] a un entier
		 *  \param [in] b un entier
		 *  \return	entier, la valeur minimum entre a et b
		 */		
		static int isMinimum(int a, int b);
		
	   /*!
		 *  \brief Est entier
		 *
		 *  Renvoie vrai si la chaîne de caractères fournie en paramètres est un entier
		 *
		 *  \param [in,out] data une chaîne de caractères
		 *  \return	vrai si data est un entier
		 *  \return	faux si data n'est pas un entier
		 */		
		static bool estEntier(const string &data);
		
	   /*!
		 *  \brief Est réel
		 *
		 *  Renvoie vrai si la chaîne de caractères fournie en paramètres est un nombre réel
		 *
		 *  \param [in,out] data une chaîne de caractères
		 *  \return	vrai si data est un réel
		 *  \return	faux si data n'est pas un réel
		 */		
		static bool estReel(const string &data);
		
		/*!
		 *  \brief Conversion en réel
		 *
		 *  Convertit une chaine de caractères en nombre réel
		 *
		 *  \param [in] val une chaîne de caractères représentant un ,ombre réel
		 *  \return	float, un nombre réel
		 */		
		static float stringToFloat(const string val);
		
	   /*!
		 *  \brief transforme en minuscules
		 *
		 *  Transforme une chaîne de caractères en lettres minuscules
		 *
		 *  \param [in,out]	chaine, une chaîne de caractères
		 *  \return void
		 */		
		static void stringToLower (string &chaine);

	   /*!
		 *  \brief transforme en majuscules
		 *
		 *  Transforme une chaîne de caractères en lettres majuscules
		 *
		 *  \param [in,out]	chaine, une chaîne de caractères
		 *  \return void
		 */				
		static void stringToUpper (string &chaine);

	   /*!
		 *  \brief transforme en majuscules
		 *
		 *  Transforme un caractère en lettre majuscule
		 *
		 *  \param [in,out]	c, un caractère
		 *  \return void
		 */				
		static void charToUpper (char &c);
		
		/*!
		 *  \brief transforme en minuscules
		 *
		 *  Transforme un caractère en lettre minuscule
		 *
		 *  \param [in,out]	c, un caractères
		 *  \return void
		 */		
		static void charToLower (char &c);
		
		/*!
		 *  \brief Conversion en entier
		 *
		 *  Convertit une chaine de caractères en nombre entier
		 *
		 *  \param [in] val une chaîne de caractères représentant un entier
		 *  \return	int, un nombre réel
		 */		
		static int stringToInt(const string val);
};
#endif
