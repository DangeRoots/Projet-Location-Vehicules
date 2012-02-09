#ifndef CDATE2_H
#define CDATE2_H

class CDate2 {
	private:
		int m_jour;
		int m_mois;
		int m_annee;

	public:
		CDate2();
		
		CDate2(const CDate2& date);
		
		CDate2(int jour, int mois, int annee);
		
		~CDate2();
		
		int getJour(){ return m_jour;}
		
		int getMois(){ return m_mois;}
	
		int getAnnee(){ return m_annee;}
	
		void setJour(int jour){ m_jour = jour;}
	
		void setMois(int mois){ m_mois = mois;}
		
		void setAnnee(int annee){ m_annee = annee;}
	
		std::string GetStrMois();
		
		int nbJours (int mois, int annee);
		
	    bool estBissextile(int annee);
	    
	    bool validerDate( int jour, int mois, int annee);
	    
	    void affichageStandard();
	
};
#endif
