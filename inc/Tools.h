#ifndef TOOLS_H
#define TOOLS_H

/*!
 * \file Tools.h
 * \brief Utilitaires variés
 * \author Gilles Coulais
 * \version 0.2
 */

/*! \class Tools
   * \brief Utilitaires
   *
   *  Cette classe fournit un certain nombre de fonctions utilitaires telles que la transformation de chaînes de caractères en majuscules
   */

class Tools {
	
	public:
	   /*!
		 *  \brief donne le minimum
		 *
		 *  Renvoie le plus petite valeur entre deux entiers fournis en paramètre
		 *
		 *  \param
		 * 		a et b, deux entiers
		 *  \return
		 * 		int, la valeur minimum
		 */		
		static int isMinimum(int a, int b);
		
	   /*!
		 *  \brief Est entier
		 *
		 *  Renvoie vrai si la chaîne de caractères fournie en paramètres est un entier
		 *
		 *  \param
		 * 		data, une chaîne de caractères
		 *  \return
		 * 		bool, vrai si data est un entier, faux sinon
		 */		
		static bool estEntier(const string &data);
		
	   /*!
		 *  \brief Est réel
		 *
		 *  Renvoie vrai si la chaîne de caractères fournie en paramètres est un nombre réel
		 *
		 *  \param
		 * 		data, une chaîne de caractères
		 *  \return
		 * 		bool, vrai si data est un entier, faux sinon
		 */		
		static bool estReel(const string &data);
		
		/*!
		 *  \brief Conversion en réel
		 *
		 *  Convertit une chaine de caractères en nombre réel
		 *
		 *  \param
		 * 		val, une chaîne de caractères
		 *  \return
		 * 		float, un nombre réel
		 */		
		static float stringToFloat(const string val);
		
	   /*!
		 *  \brief transforme en minuscules
		 *
		 *  Transforme une chaîne de caractères en lettres minuscules
		 *
		 *  \param
		 * 		chaine, une chaîne de caractères
		 *  \return
		 * 		none
		 */		
		static void stringToLower (string &chaine);

	   /*!
		 *  \brief transforme en majuscules
		 *
		 *  Transforme une chaîne de caractères en lettres majuscules
		 *
		 *  \param [in,out]	chaine, une chaîne de caractères
		 *  \return none
		 */				
		static void stringToUpper (string &chaine);

	   /*!
		 *  \brief transforme en majuscules
		 *
		 *  Transforme un caractère en lettre majuscule
		 *
		 *  \param [in,out]	c, un caractère
		 *  \return none
		 */				
		static void charToUpper (char &c);
		
		/*!
		 *  \brief transforme en minuscules
		 *
		 *  Transforme un caractère en lettre minuscule
		 *
		 *  \param c, un caractères
		 *  \return none
		 */		
		static void charToLower (char &c);
		
		/*!
		 *  \brief Conversion en entier
		 *
		 *  Convertit une chaine de caractères en nombre entier
		 *
		 *  \param
		 * 		val, une chaîne de caractères
		 *  \return
		 * 		int, un nombre entier
		 */
		static int stringToInt(const string val);
};
#endif
