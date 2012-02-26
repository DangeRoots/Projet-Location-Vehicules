#ifndef CAMION_H
#define CAMION_H

#include <iostream>
#include <Utilitaire.h> // classe de base

/*!
 * \file Camion.h
 * \brief Classe Camion
 * 
 *  Cette classe permet de créer des camions, ie des utilitaires de plus de 3,5T. 
 *  Pour les utilitaires de moins de 3,5t, il est conseillé d'utiliser la classe Utilitaire
 * 
 * \author Gilles Coulais
 * \version 0.1
 */

class Camion : public Utilitaire {
	private:
		float m_poidsUtile;
	
	public:
		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe Camion
		*
		*  \param poids, réel, poids utile
		*  \param volume, réel, volume utile
		*  \param immat, chaîne de caractères, le modèle du véhicule
		*  \param marque, chaîne de caractères, la marque du véhicule
		*  \param modele, chaîne de caractères, le kilométrage du véhicule
		*/
		Camion(float poids, float volume, string immat, string marque, string modele);

		/*!
		*  \brief Constructeur
		*
		*  Constructeur par défaut de la classe Camion
		*/
		Camion();
		
		/*!
		*  \brief Destructeur
		*
		*  Destructeur de la classe Camion
		*/
		virtual ~Camion();
		
		/*!
		 *  \fn float getPoidsUtile()
		 *  \brief Récupérer poids utile
		 *
		 *  Renvoie le poidsutile
		 *
		 *  \param none
		 *  \return float le poids utile
		 */	
		float getPoidsUtile();
		
		/*!
		 *  \fn void setPoidsUtile()
		 *  \brief Modifier poids utile
		 *
		 *  Modifie le poids utile
		 *
		 *  \param poids, réel, le volume utile
		 *  \return void
		 */			
		void setPoidsUtile(float poids);

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
		*  \brief sauvegarder camion
		*
		*  Sauvegarde le camion
		*
		*  \param [in,out] fs fstream, le fichier de sauvegarde
		*  \return void
		*/								
		virtual void save(fstream &fs);
};

#endif
