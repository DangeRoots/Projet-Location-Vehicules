#ifndef PARC_H
#define PARC_H

/*!
 * \file Parc.h
 * \brief Classe Parc
 * 
 *  Cette classe permet de gérer un parc de locations de véhicules
 * 
 * \author Gilles Coulais, Icham Sirat
 * \version 0.1
 */

class Parc {
	private:
		list<Location> listeVehicule;
		bool chargerParc();
	
	public:

		/*!
		*  \brief Constructeur
		*
		*  Constructeur de la classe Parc
		*
		*  \param listeVehicule, liste de Location, la liste des véhicules du parc
		*/
		Parc (list<Location> listeVehicule);
		
		/*!
		*  \brief Constructeur
		*
		*  Constructeur par défaut de la classe Parc
		*
		*  \param aucun
		*/
		Parc ();
		
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
		*  \param vehicule, Location
		*  \return void
		*/		
		void ajouterVehicule (Location vehicule);
		
		/*!
		*  \brief Supprimer location
		*
		*  Permet de supprimer un véhicule du parc
		*
		*  \param vehicule, Location
		*  \return void
		*/
		void supprimerVehicule (Location vehicule);

		/*!
		*  \brief Modifier location
		*
		*  Permet de modifier un véhicule du parc
		*
		*  \param vehicule, Location
		*  \return void
		*/
		void modifierVehicule (Location vehicule);
		
		/*!
		*  \brief Rechercher location
		*
		*  Permet de rechercher un véhicule du parc
		*
		*  \param type, caractères, le type de véhicule recherché : v pour vp, u pour utilitaire, c pour camion
		*  \param dateDepart, CDate, la date de début de location souhaitée
		*  \param dateRetour, CDate, la date de fin de location souhaitée
		*  \return un objet Location
		*/		
		Location rechercherVehicule(char type, CDate dateDepart, CDate dateRetour);
		
		/*!
		*  \brief Afficher liste complète
		*
		*  Affiche la liste complète des véhicules du parc
		*
		*  \param aucun
		*  \return void
		*/				
		void afficherParc ();
		
		/*!
		*  \brief Afficher véhicules loués
		*
		*  Affiche la liste des véhicules en cours de location entre deux dates
		*
		*  \param dateDebut, CDate, la date de début de location
		*  \param dateFin, CDate, la date de fin de location
		*  \return void
		*/						
		void afficherLoues (CDate dateDebut, CDate dateFin);
		
		/*!
		*  \brief Afficher véhicules disponibles
		*
		*  Affiche la liste des véhicules disponibles entre deux dates
		*
		*  \param dateDebut, CDate, la date de début de location souhaitée
		*  \param dateFin, CDate, la date de fin de location souhaitée
		*  \return void
		*/								
		void afficherDisponibles (CDate dateDebut, CDate dateFin);
		
		/*!
		*  \brief Afficher véhicules restituables
		*
		*  Affiche la liste des véhicules dont la date de retour prévue est égale ou inférieure à la date du jour
		*
		*  \param today, CDate, la date de consultation de la liste
		*  \return void
		*/										
		void afficherRestituables(CDate today);
		
		/*!
		*  \brief Sauvegarder parc
		*
		*  Sauvegarde la liste des véhicules sur disque
		*
		*  \param aucun
		*  \return void
		*/												
		bool sauvegarderParc();
};

#endif
