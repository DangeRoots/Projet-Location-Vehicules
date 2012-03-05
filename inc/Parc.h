#ifndef PARC_H
#define PARC_H

#include <iostream>
#include <fstream>
#include <list>

#include <Location.h>
#include <Camion.h>
#include <Utilitaire.h>
#include <VP.h>
#include <Tools.h>

/*!
 * \file Parc.h
 * \brief Classe Parc
 * 
 *  Cette classe permet de gérer un parc de locations de véhicules
 * 
 * \author Gilles Coulais, Icham Sirat
 * \version 1.0
 */

class Parc {
	private:
		list<Location> m_parcAuto;
		list<Location>::iterator m_parcAutoI;
		
		/*!
		*  \brief Entrer type véhicule
		*
		*  Permet à l'utilisateur d'entrer le type de véhicule
		*
		*  \param [in,out] t chaîne de caractères, le type de véhicule (v pour un VP, u pour utilitaire, c pour un camion)
		*  \return void
		*/		
		void entrerTypeVeh(string &t);

		/*!
		*  \brief Entrer immatriculation
		*
		*  Permet à l'utilisateur d'entrer l'immatriculation du véhicule
		*
		*  \param [in,out] i chaîne de caractères, l'immatriculation du véhicule
		*  \return void
		*/		
		void entrerImmat(string &i);
		
		/*!
		*  \brief Entrer marque et modèle
		*
		*  Permet à l'utilisateur d'entrer la marque et le modèle du véhicule
		*
		*  \param [in,out] t_ma chaîne de caractères, la marque du véhicule
		*  \param [in,out] t_mo chaîne de caractères, le modèle du véhicule
		*  \return void
		*/		
		void entrerMarqueModele(string &t_ma, string &t_mo);
		
		/*!
		*  \brief Entrer kilométrage
		*
		*  Permet à l'utilisateur d'entrer le kilométrage du véhicule
		*
		*  \param [in,out] t_k entier, le kilométrage du véhicule
		*  \return void
		*/		
		void entrerKilometrage(int &t_k);
		
		/*!
		*  \brief Entrer volume utile
		*
		*  Permet à l'utilisateur d'entrer le volume du véhicule
		*
		*  \param [in,out] t_v réel, le volume du véhicule
		*  \return void
		*/		
		void entrerVolumeUtile(float &t_v);

		/*!
		*  \brief Entrer poids utile
		*
		*  Permet à l'utilisateur d'entrer le poids du véhicule
		*
		*  \param [in,out] t_p réel, le poids du véhicule
		*  \return void
		*/		
		void entrerPoidsUtile(float &t_p);
		
		/*!
		*  \brief Entrer nombre places
		*
		*  Permet à l'utilisateur d'entrer le nombre de places du véhicule
		*
		*  \param [in,out] t_nbp entier, le nombre de places du véhicule
		*  \return void
		*/		
		void entrerNbPlaces(int &t_nbP);
		
	public:
		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe Parc
		*
		*  \param [in,out] inFile fstream, le fichier contenant la liste des véhicules
		*/
		Parc (fstream &inFile);
		
		/*!
		*  \brief Constructeur
		*
		*  Constructeur par défaut de la classe Parc
		*
		*  \param aucun
		*/
		Parc();
		
		/*!
		*  \brief Destructeur
		*
		*  Destructeur de la classe Parc
		* 
		*  \param aucun
		*/						
		~Parc ();
		
		/*!
		*  \brief Ajouter location
		*
		*  Permet d'ajouter un véhicule dans le parc
		*
		*  \return void
		*/		
		void ajouterLocation ();

		/*!
		*  \brief Modifier location
		*
		*  Permet de modifier une location du parc
		*
		*  \param [in] loc Location, la location à modifier
		*  \return void
		*/
		void modifierLocation (Location loc);
		
		/*!
		*  \brief Vérifie si un véhicule est dans le parc
		*
		*  Permet de rechercher une location dans le parc
		*
		*  \param [in] immat caractères, l'immatriculation du véhicule
		*  \return bool, vrai si le véhicule est dans le parc
		*  \return bool, faux si le véhicule n'est pas dans le parc
		*/		
		bool estDansLeParc(string immat, Location &loc);
		
		/*!
		*  \brief Afficher liste complète
		*
		*  Affiche la liste complète des véhicules du parc
		*
		*  \param aucun
		*  \return void
		*/				
		void afficher();
		
		/*!
		*  \brief Sauvegarder parc
		*
		*  Sauvegarde le parc dans un fichier
		*
		*  \param [in] nomFichier string, le nom du fichier de sauvegarde
		*  \return void
		*/												
		void sauvegarder(string nomFichier);

		/*!
		*  \brief Enregistrer retour
		*
		*  Enregistre le retour d'une location
		*
		*  \param [in] kilom entier, le kilométrage au retour du véhicule
		*  \param [in] immat chaîne de caractères, l'immatriculation du véhicule
		*  \return void
		*/														
		void enregistrerRetour(int kilom, string immat);

		/*!
		*  \brief Rechercher location
		*
		*  Renvoie un itérateur sur la position d'une location, dont l'immatriculation est donnée en argument.
		*
		*  \param [in] immat string, l'immatriculation du véhicule recherché
		*  \return un itérateur de Location
		*/													
		list<Location>::iterator rechercherLocation(string immat);
};

#endif
