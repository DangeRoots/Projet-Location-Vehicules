#ifndef CONSTRUCTEUR_H
#define CONSTRUCTEUR_H

/*!
 * \file Constructeur.h
 * \brief Classe Constructeur
 * 
 *  Cette classe propose des outils pour gérer un constructeur
 * 
 * \author Gilles Coulais, Icham Sirat
 * \version 0.1
 */

class Constructeur {
	private:
		string m_nomConstructeur;

	public:
		/*!
		*  \brief Constructeur
		*
		*  Constructeur par défaut de la classe Constructeur
		*
		*  \param aucun
		*/
		Constructeur();

		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe Constructeur
		*
		*  \param nomConstructeur, chaine de caractères, le nom du constructeur
		*/		
		Constructeur(string nomConstructeur);
		
		/*!
		*  \brief Destructeur
		*
		*  Destructeur de la classe Constructeur
		* 
		*  \param aucun
		*/				
		~Constructeur();
		
		/*!
		*  \brief Accéder au constructeur
		*
		*  Permet d'obtenir le constructeur d'un véhicule
		*
		*  \param aucun
		*  \return un objet Constructeur
		*/		
		Constructeur getConstructeur();

		/*!
		*  \brief Modifier nom constructeur
		*
		*  Permet de modifier le nom du constructeur
		*
		*  \param nomConstructeur, chaine de caractère , le nouveau constructeur
		*  \return void
		*/		
		string setConstructeur(string nomConstructeur);

		/*!
		*  \brief Afficher constructeur
		*
		*  Affiche le constructeur
		*
		*  \param aucun
		*  \return void
		*/								
		void afficher();
};

#endif
