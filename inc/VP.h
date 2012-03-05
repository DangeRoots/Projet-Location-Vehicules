#ifndef VP_H
#define VP_H

// #include <string>
#include <iostream>
#include <iomanip>
#include <Vehicule.h>

/*!
 * \file VP.h
 * \brief Classe VP
 * 
 *  Cette classe permet de créer une voiture particulière.
 * 
 * \author Gilles Coulais, 
 * \author Icham Sirat
 * \version 1.0
 */

class VP: public Vehicule {	
	private:
		int m_nbPlaces;
			
	public:
		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe VP
		*
		*  \param [in] immat chaîne de caractères, l'immatriculation de la voiture
		*  \param [in] modele chaîne de caractères, le modèle de la voiture
		*  \param [in] marque chaîne de caractères, la marque de la voiture
		*  \param [in] nbPlaces entier, le nombre de place de la voiture
		*/
		VP(string immat, string marque, string modele, int nbPlaces);
		
		/*!
		 *  \brief Constructeur
 		 *
 		 *  Constructeur par défaut de la classe VP
		 *
		 *  \param aucun
		 */
		VP();

		/*!
		 *  \brief Destructeur
		 *
		 *  Destructeur de la classe VP
		 *
		 *  \param aucun
		 */
		virtual ~VP();
		
		/*!
		 *  \brief Accéder nombre de places
		 *
		 *  Permet d'obtenir le nombre de place de la voiture
		 *
		 *  \param aucun
		 *  \return m_nbPlaces entier, le nombre de place de la voiture
		 */		
		int getNbPlaces();

		/*!
		 *  \brief Modifier le nombre de places
		 *
		 *  Permet de modifier le nombre de place de la voiture
		 *
		 *  \param [in] nbPlaces entier, le nombre de place de la voiture
		 *  \return void
		 */		
		void setNbPlaces(int nbPlaces);
		
		/*!
		*  \brief Afficher VP
		*
		*  Affiche la voiture
		*
		*  \param aucun
		*  \return void
		*/								
		virtual void afficher();
		
		/*!
		*  \brief sauvegarder VP
		*
		*  Sauvegarde le VP
		*
		*  \param [in,out] fs fstream, le fichier de sauvegarde
		*  \return void
		*/								
		virtual void save(fstream &fs);
};

#endif

		
		
		
		
		
		
