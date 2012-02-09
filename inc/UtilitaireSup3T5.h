#ifndef UTILITAIRESUP3T5_H
#define UTILITAIRESUP3T5_H

/*!
 * \file UtilitaireSup3T5.h
 * \brief Classe UtilitaireSup3T5
 * 
 *  Cette classe propose tout ce qu'il faut pour créer un véhicule utilitaire d'un poids supérieur à 3,5T
 * 
 * \author Gilles Coulais
 * \version 0.1
 */

class UtilitaireSup3T5 : public UtilitaireInf3T5 {
	private:
		float poidsUtile;
			
	public:
		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe UtilitaireSup3T5
		*
		*  \param immatriculation, immat, l'immatriculation du véhicule
		*  \param marque, Constructeur, la marque du véhicule
		*  \param kilometrage, entier, le kilométrage du véhicule
		*  \param volumeUtile, flottant, le volume utile du véhicule
		*  \param poidsUtile, flottant, le poids utile du véhicule
		*/
		UtilitaireSup3T5 (Immat immatriculation, Constructeur marque, int kilometrage, float volumeUtile, float poidsUtile);
		
		/*!
		*  \brief Constructeur
		*
		*  Constructeur par défaut de la classe UtilitaireSup3T5
		*
		*  \param aucun
		*/
		UtilitaireSup3T5 ();

		/*!
		*  \brief Destructeur
		*
		*  Destructeur de la classe UtilitaireSup3T5
		*
		*  \param aucun
		*/
		virtual ~UtilitaireSup3T5();
};

#endif
