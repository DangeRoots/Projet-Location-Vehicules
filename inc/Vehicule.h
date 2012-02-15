#ifndef VEHICULE_H
#define VEHICULE_H

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
		int m_kilometrage;
		int m_nbLocation; // Nombre de fois où la véhicule a été loué
			
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
		Vehicule(string immat, string marque, string modele, int kilometrage, int nbLocation);
		
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
		void setModele(std::string modele);

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
		void setMarque(std::string marque);

		/*!
		 *  \brief Accéder kilométrage
		 *
		 *  Permet d'obtenir le kilométrage du véhicule
		 *
		 *  \param aucun
		 *  \return m_kilometrage, entier, le kilométrage du véhicule
		 */		
		int getKilometrage();
		
		/*!
		 *  \brief Accéder nombre locations
		 *
		 *  Permet d'obtenir le nombre de fois où le véhicule a fait l'objet d'une location
		 *
		 *  \param aucun
		 *  \return m_nbLocation, entier, le nombre de locations du véhicule
		 */		
		int getNbLocation();

		/*!
		 *  \brief Modifier nombre locations
		 *
		 *  Permet de modifier le nombre de locations du véhicule
		 *
		 *  \param nbLoc, entier, le nouveau nombre de locations du véhicule
		 *  \return void
		 */	
		void setNbLocation(int nbLoc);

		/*!
		 *  \brief Modifier kilométrage
		 *
		 *  Permet de modifier le kilométrage du véhicule
		 *
		 *  \param kilom, entier, le nouveau kilométrage du véhicule
		 *  \return void
		 */		
		void setKilometrage(int kilom);

		/*!
		 *  \brief Véhicule identiques
		 *
		 *  Permet de savoir si deux véhicules sont identiques
		 *
		 *  \param veh, objet Vehicule, le véhicule à comparer
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
};

#endif
