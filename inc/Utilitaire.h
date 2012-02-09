#ifndef UTILITAIRE_H
#define UTILITAIRE_H

/*!
 * \file Utilitaire.h
 * \brief Classe Utilitaire
 * 
 *  Cette classe permet de créer des utilitaires. Pour les utilitaires de plus de 3,5t, il est conseillé d'utiliser la classe UtilitaireGros
 * 
 * \author Gilles Coulais
 * \version 0.1
 */

class Utilitaire : Vehicule {
	private:
		float volumeUtile;
	public:
		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe Vehicule
		*
		*  \param volume, réel, volume utile
		*  \param immat, chaîne de caractères, le modèle du véhicule
		*  \param marque, chaîne de caractères, la marque du véhicule
		*  \param modele, chaîne de caractères, le kilométrage du véhicule
		*  \param kilom, entier, le kilométrage du véhicule
		*/
		Utilitaire(float volume, string immat, string marque, string modele, int kilom);

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
		~Utilitaire();
		
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
		 *  \param volume, réel, le volume utile
		 *  \return void
		 */			
		void setVolumeUtile(float volume);
};

#endif
