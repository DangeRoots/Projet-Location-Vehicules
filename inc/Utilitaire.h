#ifndef UTILITAIRE_H
#define UTILITAIRE_H

#include <iostream>
#include <iomanip>
#include <Vehicule.h>

/*!
* \file Utilitaire.h
* \brief Classe Utilitaire
* \author Gilles Coulais, Icham Sirat
* \version 1.0
*/

/*! 
* \class Utilitaire
* \brief Création d'utilitaire
*
*  Cette classe permet de créer des utilitaires. Pour les utilitaires de plus de 3,5t, il est conseillé d'utiliser la classe Camion
*/

class Utilitaire : public Vehicule {
	private:
		float m_volumeUtile;
	
	public:
		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe Vehicule
		*
		*  \param [in] volume réel, volume utile
		*  \param [in] immat chaîne de caractères, le modèle du véhicule
		*  \param [in] marque chaîne de caractères, la marque du véhicule
		*  \param [in] modele chaîne de caractères, le kilométrage du véhicule
		*/
		Utilitaire(float volume, string immat, string marque, string modele);

		/*!
		*  \brief Constructeur
		*
		*  Constructeur par défaut de la classe Vehicule
		*/
		Utilitaire();
		
		/*!
		*  \brief Destructeur
		*
		*  Destructeur de la classe Ordre
		*/
		virtual ~Utilitaire();
		
		/*!
		 *  \fn float getVolumeUtile()
		 *  \brief Récupérer volume utile
		 *
		 *  Renvoie le volume utile
		 *
		 *  \param none
		 *  \return float le volume utile
		 */	
		float getVolumeUtile();
		
		/*!
		 *  \fn void setVolumeUtile()
		 *  \brief Modifier volume utile
		 *
		 *  Modifie le volume utile
		 *
		 *  \param [in] volume réel, le volume utile
		 *  \return void
		 */			
		void setVolumeUtile(float volume);

		/*!
		*  \brief Afficher utilitaire
		*
		*  Affiche l'utilitaire
		*
		*  \param aucun
		*  \return void
		*/								
		virtual void afficher();
		
		/*!
		*  \brief sauvegarder utilitaire
		*
		*  Sauvegarde l'utilitaire
		*
		*  \param [in,out] fs fstream, le fichier de sauvegarde
		*  \return void
		*/								
		virtual void save(fstream &fs);
};

#endif
