#ifndef IMMAT_H
#define IMMAT_H

/*!
 * \file Immat.h
 * \brief Classe Immat
 * 
 *  Cette classe propose des outils pour gérer une immatriculation
 *  Cette version ne gère que les nouvelles plaques d'immatriculation françaises
 * 
 * \author Gilles Coulais, Icham Sirat
 * \version 0.1
 */

class Immat {
	private:
		string m_immatriculation;

	public:
		/*!
		*  \brief Constructeur
		*
		*  Constructeur par défaut de la classe Immat
		*
		*  \param aucun
		*/
		Immat();

		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe Immat
		*
		*  \param immatriculation, chaine de caractères, les caractères d'immatriculation
		*/		
		Immat(string immatriculation);
		
		/*!
		*  \brief Destructeur
		*
		*  Destructeur de la classe Immat
		* 
		*  \param aucun
		*/				
		~Immat();
		
		/*!
		*  \brief Accéder à l'immatriculation
		*
		*  Permet d'obtenir l'immatriculation
		*
		*  \param aucun
		*  \return un objet Immat
		*/		
		Immat getImmat();

		/*!
		*  \brief Modifier immatriculation
		*
		*  Permet de modifier l'immatriculation d'un véhicule
		*
		*  \param immat, Immat, la nouvelle immatriculation
		*  \return void
		*/		
		void setImmat(string immat);
		
		/*!
		*  \brief Afficher immat
		*
		*  Affiche l'immatriculation
		*
		*  \param aucun
		*  \return void
		*/								
		void afficher();
		
		// Ajouter une surcharge de l'opérateur =
		// Ajouter une surcharge de l'opérateur ==
};

#endif
