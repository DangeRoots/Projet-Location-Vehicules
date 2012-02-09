#ifndef UTILITAIREINF3T5_H
#define UTILITAIREINF3T5_H

/*!
 * \file UtilitaireInf3T5.h
 * \brief Classe UtilitaireInf3T5
 * 
 *  Cette classe propose tout ce qu'il faut pour créer un véhicule utilitaire d'un poids inférieur à 3,5T
 * 
 * \author Gilles Coulais
 * \version 0.1
 */

class UtilitaireInf3T5 : public Vehicule {
	private:
		float volumeUtile;
			
	public:
		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe UtilitaireInf3T5
		*
		*  \param immatriculation, immat, l'immatriculation du véhicule
		*  \param marque, Constructeur, la marque du véhicule
		*  \param kilometrage, entier, le kilométrage du véhicule
		*  \param volumeUtile, flottant, le volume utile du véhicule
		*/
		UtilitaireInf3T5 (string immat, string marque, int kilometrage, float volumeUtile);
		
		/*!
		*  \brief Constructeur
		*
		*  Constructeur par défaut de la classe UtilitaireInf3T5
		*
		*  \param aucun
		*/
		UtilitaireInf3T5 ();

		/*!
		*  \brief Destructeur
		*
		*  Destructeur de la classe UtilitaireInf3T5
		*
		*  \param aucun
		*/
		virtual ~UtilitaireInf3T5();
};

#endif
