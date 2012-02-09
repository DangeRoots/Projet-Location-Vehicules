#ifndef VP_H
#define VP_H

/*!
 * \file VP.h
 * \brief Classe VP
 * 
 *  Cette classe propose tout ce qu'il faut pour créer un véhicule particulier
 * 	Elle dérive de la classe Vehicule
 * 
 * \author Gilles Coulais
 * \version 0.1
 */

class VP : public Vehicule {
	private:
		int nbPlaces;

	public:
		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe VP
		*
		*  \param immatriculation, Immat, immatriculation du véhicule
		*  \param marque, Constructeur, constructeur du véhicule
		*  \param kilometrage, entier, kilométrage du véhicule
		*  \param nbPlaces, entier, nombre de places du véhicule
		*/
		VP (Immat immatriculation, Constructeur marque, int kilometrage, int nbPlaces);
		
		/*!
		*  \brief Constructeur
		*
		*  Constructeur par défaut de la classe VP
		*
		*  \param aucun
		*/
		VP ();

		/*!
		*  \brief Destructeur
		*
		*  Destructeur de la classe VP
		*
		*  \param aucun
		*/
		virtual ~VP ();
);

#endif
