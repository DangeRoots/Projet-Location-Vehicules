#ifndef VEHICULE_H
#define VEHICULE_H

#include <iostream>
// #include <iomanip>
#include <fstream>

/*!
 * \file Vehicule.h
 * \brief Classe Vehicule
 * 
 *  Cette classe propose un contenu basique pour créer un véhicule.
 * 	Elle est destinée à être dérivée pour créer de nouvelles classes spécialisées.
 * 
 * \author Gilles Coulais, 
 * \author Icham Sirat
 * \version 0.2
 */

class Vehicule {	
	private:
		string m_immatriculation, m_marque, m_modele;
		// int m_kilometrage;
			
	public:
		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe Vehicule
		*
		*  \param immat, chaîne de caractères, l'immatriculation du véhicule
		*  \param marque, chaîne de caractères, la marque du véhicule
		*  \param modele, chaîne de caractères, le modèle du véhicule
		*  \param kilometrage, entier, le kilométrage du véhicule
		*  \param nbLocation, entier, le nombre de locations du véhicule
		*/
		// Vehicule(string immat, string marque, string modele, int kilometrage, int nbLocation);
		Vehicule(string immat, string marque, string modele);
		
		/*!
		 *  \brief Constructeur
 		 *
 		 *  Constructeur par défaut de la classe Vehicule
		 *
		 *  \param aucun
		 */
		Vehicule();

		/*!
		 *  \brief Destructeur
		 *
		 *  Destructeur de la classe Vehicule
		 *
		 *  \param aucun
		 */
		virtual ~Vehicule();
		
		/*!
		 *  \brief Accéder immatriculation
		 *
		 *  Permet d'obtenir l'immatriculation du véhicule
		 *
		 *  \param aucun
		 *  \return m_immatriculation, chaîne de caractères, l'immatriculation du véhicule
		 */		
		string getImmatriculation();

		/*!
		 *  \brief Modifier immatriculation
		 *
		 *  Permet de modifier l'immatriculation du véhicule
		 *
		 *  \param immat, chaîne de caractères, l'immatriculation du véhicule
		 *  \return void
		 */		
		void setImmatriculation(string immat);

		/*!
		 *  \brief Accéder modèle
		 *
		 *  Permet d'obtenir le modèle du véhicule
		 *
		 *  \param aucun
		 *  \return m_modele, chaîne de caractères, le modèle du véhicule
		 */		
		string getModele();

		/*!
		 *  \brief Modifier modele
		 *
		 *  Permet de modifier le modèle du véhicule
		 *
		 *  \param modele, chaîne de caractères, le modèle du véhicule
		 *  \return void
		 */		
		void setModele(string modele);

		/*!
		 *  \brief Accéder marque
		 *
		 *  Permet d'obtenir la marque du véhicule
		 *
		 *  \param aucun
		 *  \return m_marque, chaîne de caractères, la marque du véhicule
		 */		
		string getMarque();

		/*!
		 *  \brief Modifier marque
		 *
		 *  Permet de modifier la marque du véhicule
		 *
		 *  \param marque, chaîne de caractères, la marque du véhicule
		 *  \return void
		 */		
		void setMarque(string marque);

		/*!
		 *  \brief Véhicule identiques
		 *
		 *  Permet de savoir si deux véhicules sont identiques
		 *
		 *  \param [in] veh Vehicule, le véhicule à comparer
		 *  \return true s'il sont identiques
		 *  \return false s'il sont différents
		 */			
		bool operator==(const Vehicule &veh);

		/*!
		*  \brief Afficher véhicule
		*
		*  Affiche le véhicule
		*
		*  \param aucun
		*  \return void
		*/								
		virtual void afficher();
		
		/*!
		*  \brief sauvegarder véhicule
		*
		*  Sauvegarde le véhicule
		*
		*  \param [in,out] fs fstream, le fichier de sauvegarde
		*  \return void
		*/								
		virtual void save(fstream &fs);
};
#endif
